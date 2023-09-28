/**************************************************************************************************************
suppose your program needs to store the date of purchase of a particular item
you must keep track of three separate variables for each date that you use in the program
these variables are logically related and should be grouped together


Creating a stcuture
the struct keyword enables you to define a collection of variables of various types called a structure that
you can treat as a single unit.

struct date
{
    int month;
    int day;
    int year;
};

the above statement defines what a date structure looks like to the C compiler
there is no memory allocation for this declaration
the variable names within the date structure, month, day, and year, are called members or fields


Using a structure
the definition of date defines a new type in the language
variables can now be declared to be of type struct date

struct date today;

you can now declare more variables of type struct date

struct date purchaseDate;

the above statement declares a variable to be of type struct date
memory is now allocated for the variables above


Accessing members in a struct
a structure variable name is not a pointer
you need a special syntax to access the members.

the period (.) between the structure variable name and the member name is called member selection operator
there are no spaces permitted between the variable name, the period, and the member name

to set the value of the day in the variable today to 25, you write
today.day = 25;
today.year = 2015;

to test the value of month to see if it is equal to 12

if(today.month == 12)
    nextMonth = 1;


Defining the structure and variable at the same time
it is valid to declare a variable to be of a particular structure type at the same time that the structure is defined

struct date
{
    int month;
    int day;
    int year;
} today;

in the above, an instance of the structure, called today, is declared at the same time that the structure is defined
today is a variable of type date

but a disadvantage of the above is that you can no longer define further instances of the structure in another statement
all the variables of this structure type that you want in your program must be dedfined in the one statement.


Initializing Structures
initializing structures is similar to initializing arrays

struct date today = { 7, 2, 2015 };

just like an array initialization, fewer values might be listed than one contained in the structure

struct date date1 = { 12, 10 };

sets date1.month to 12 and date1.day  to 10 but gives no initial value to date.year

you can also specify the member names in the initialization list
enables you to initialize the members in any order, or to only initialize specified members

.member = value

struct date date1 = { .month = 12, .day = 10 };

set just the year member of the date structure variable today to 2015
struct date today = { .year = 2015 };


Assignment with compound literals
you can assign one or more values to a structure in a single statement using what is known as compoung literals

today = (struct date) { 9, 25, 2015 };

this statement can appear anywhere in the program

you can also specify values using the .member notation

today = (struct date) { .month = 9, .day = 25, .year = 2015 };

the advantage of using this approach is that the arguments can appear in any order
**************************************************************************************************************/

#include <stdio.h>

int main()
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;
}
