/*************************************************************************************************
declaring an array of structures is like declaring any other kind of array

struct date myDates[10];

defines an array called myDates, which consists of 10 elements
each element inside the array is defined to be of type struct date

referencing a particular structure element inside the array is quite natural
to set the second inside the myDates array to August 8, 1986

myDates[1].month = 8;
myDates[1].day = 8;
myDates[1].year = 1986;

initialization of arrays containing structures is similar to initialization of multidimensional arrays

struct date myDates[5] = { {12, 10, 1975}, {12, 30, 1980}, {11, 15, 2005} };

sets the first three dates in the array myDate to 12/10/1975, 12/30/1980, and 11/15/2005
and the inner pairs of braces are optional

struct date myDates[5] = { 12, 10, 1975, 12, 30, 1980, 11, 15, 2005 };

initializes just the third element of the array to the specified value

struct date myDates[5] = { [2]={12, 10, 1975} };

sets just the month and day of the second element of the myDates array to 12 and 30

struct ate myDates[5] = { [1].month = 12, [1].day = 30 };


Structure containing arrays
suppose you wnat to defined a structue called month that contains as its members the number of days in the
month as well as a three-character abbreviation for the month name

struct month
{
    int numberOfDays;
    char name[3]
};

this sets up a month structure that contains an integer member called numberOfDays and a character
member called name
and member name is actually an array of three characters
you can now define a variable to be of type struct month and set the proper fields inside aMonth for January

struct month aMonth;
aMonth.numberOfDays = 31;
aMonth.name[0] = 'J';
aMonth.name[1] = 'a';
aMonth.name[2] = 'n';

you can also initialize this variable to the same values

struct month aMonth = { 31, {'J', 'a', 'n'} };

you can set up 12-month structures inside an array to represent each month of the year

struct month months[12];
**************************************************************************************************/
#include <stdio.h>

struct month
{
    int numberOfDays;
    char name[7];
};

int main()
{
    struct month aMonth = { 31, {'J', 'a', 'n', 'u', 'a', 'r', 'y'} };

    printf("The number of days is %d and characters of the month is %s", aMonth.numberOfDays, aMonth.name);

    return 0;
}
