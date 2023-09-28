/************************************************************************************************************
struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

variables can noe be defined to be of type struct dateAndTime

struct dateAndTime event;

to reference the date structure of the variable event, the syntax is the same as referencing any member

event.sdate

event.sdate.month = 10;
++event.stime.seconds;

struct dateAndTime event = { {2, 1, 2015}, {3, 30, 0} };

you can use members' names in the initialization

struct dateAndTime event =
{
    {.month = 2, .day = 1, .year = 2015},
    {.hour = 3, .minutes = 30, .seconds = 0}
};


An array of nested structures

struct dateAndTime events[100];

events[0].stime.hour = 12;
events[0].stime.minutes = 0;
events[0].stime.seconds = 0;


Declaring a structure within a structure

struct Time
{
    struct Date
    {
        int day;
        int month;
        int year;
    } dob;

    int hour;
    int minutes;
    int seconds;
};

****************************************************************************************************************/
