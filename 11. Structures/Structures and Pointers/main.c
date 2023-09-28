/*************************************************************************************************
Declaring a struct as a poiter

struct date *datePtr;

datePtr = &todaysDate;

you can then indirectly access any of the members of the date structure pointed to by datePtr
(*datePtr).day = 21;

the above has the effect of setting the day of the date structure pointed to by datePtr to 21
parentheses are required because the structure member operator (.) has higher precedence than
the indirection operator (*)

Using structs as pointers

if((*datePtr).month == 12)

pointers to structures are so often used in C that a special operator exists
the structure pointer operator (->), which is the dash followed by the greater than sign, permits

(*x).y
to be more clearly expressed as
x->y

the previous if statement can be conveniently written as
if(datePtr->month == 12)


Structures contianing pointers

struct intPtrs
{
    int *p1;
    int *p2;
};

you can define a variable of type struct intPtrs

struct intPtrs pointers;

the variable pointers can now be used just like other structs
pointers itself is not a poiner, but a structure variable that has two pointers as its members


Character arrays or character pointers??

struct names
{
    char first[20];
    char last[20];
};

OR

struct pnames
{
    char *first;
    char *last;
};

you can do both, however, you need to understand what is happening here

struct names veep = {"Talia", "Summers"};
struct pnames treas = {"Brad", "Fallingjaw"};
printf("%s and %s\n", veep.first, treas.first);

the struct names variable veep
    strings are stored inside the structure
    structure has allocated a total of 40 bytes to hold the two names

the struct pnames variable treas
    strings are stored wherever the compiler stores string constants
    the structure holds the two addresses, which takes a total of 16 bytes on our system
    the struct pnames structure allocates no space to store strings
    it can be used only with strings that have had space allocated for them elsewhere
        such as string constants or strings in arrays

the pointers in a pnames structure should be used only to manage strings that were created and allcoated elsewhere
in the program

one instance in which it does make sense to use a pointer in a structure to handle a string is if you are dynamically
allocating that memory
    use a pointer to store the address
    has the advantage that you can ask malloc() to allocate just the amount of space that is needed for a string

struct namect
{
    char *fname; // using poitners instead of arrays
    char *lname;
    int letters;
};

understand that the two strings are not stored in the structure
    stored in the chunk of memory menaged by malloc()
    the addresses of the two strings are stored in the structure
    addresses are what string-handling functions typically work with
**************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN;

void firstExample();
void secondExample();
void getinfo(struct namect *pst);

int main()
{
    firstExample();
    printf("----------------------------------------------------------------\n");
    secondExample();

    return 0;
}

void firstExample()
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);
}

void secondExample()
{
    struct intPtrs
    {
        int *p1;
        int *p2;
    };

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1 = %i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2 = %i, *pointers.p2 = %i\n", i2, *pointers.p2);
}

void getinfo(struct namect *pst)
{
    char temp[SLEN];
    printf("Please enter your first name.\n");
    gets_s(temp, SLEN);

    // allocate memory to hold name
    pst->fname = (char *) malloc(strlen(temp) + 1);

    // copy name to allcoated memory
    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    gets_s(temp, SLEN);
    pst->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}
