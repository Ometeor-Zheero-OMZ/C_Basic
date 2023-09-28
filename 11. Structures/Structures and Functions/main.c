/******************************************************************************************************
Structures as arguments to functions

struct Family
{
    char name[20];
    int age;
    char father[20];
    char mother[20];
};

bool siblings(struct Family member1, struct Family member2)
{
    if(strcmp(member1.mother, member2.mother) == 0)
        return true;
    else
        return false;
}


Pointers to Structures as function arguments

bool siblings(struct Family *pmember1, struct Family *pmember2)
{
    if(strcmp(pmember1->mother, pmember2->mother) == 0)
        return true;
    else
        return false;
}

you can also use the const modifier to not allow modification of the members of the struct (what the struct is pointing to)

bool siblings(Family const *pmember1, Family const *pmember2)
{
    if(strcmp(pmember1->mother, pmember2->mother) == 0)
        return true;
    else
        return false;
}

you can also use the const modifier to not allow any modification of the pointers address
    any attempt to change those structures will cause an error message during compilation

bool siblings(Family *const pmember1, Family *const pmember2)
{
    if(strcmp(pmember1->mother, pmember2->mother) == 0)
        return true;
    else
        return false;
}


Rreturning a structure from a function

struct Date my_fun(void);

it is often more convenient to return a pointer to a structure
    when returning a pointer to a structure, it should be created on the heap

Reminder
you have less protection for your data
    some operations in the called function could inadvertently affect data in the original structure
    use const qualifier solves that problem

Pros
    the function works with copies of the original data, which is safer than working with the original data
    the programming style tends to be clearer
Cons
    older implementations might not handle the code
    wastes time and space
    especially wasteful to pass large structures to a function that uses only one or two members of the structure

programmers use structure pointers as function arguments for reasons of efficiency and use const when necessary
passing structures by value is most often done for structures that are small
*******************************************************************************************************/
#include <stdio.h>

#define FUNDLEN = 50;

struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah)
{
    return (moolah.bankfund + moolah.savefund);
}

int main()
{
    struct funds stan =
    {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };

    printf("Stan has a total of $%.2f.\n", sum(stan));

    return 0;
}
