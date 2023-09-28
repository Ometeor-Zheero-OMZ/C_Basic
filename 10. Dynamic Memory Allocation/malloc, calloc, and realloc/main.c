/******************************************************************************************************************
1. malloc
You can request any number of bytes
if the memory that you requested can bot be allocated for any reason
malloc() returns a pointer with the value NULL
It is always a good idea to check any dynamic memory request immediately using an
if statement to make sure the memory is actually there before you try to use it

int *pNumber = (int*)malloc(25*sizeof(int));
if(!pNumber)
{
    code to deal with memory allocation failure
}

You can at least display a message and terminate the program
much better than allowing the program to continue and crash when it uses a NULKL address to store something


2. Releasing memory
when you allocate memory dynamically, you should always release the memory whne it is no longer required.
a memory leak occurs when you allocate some memory dynamically and you do not retain the reference to it,
occurs within a loop
because you do not release the memory when it is no longer required,
your program consumes more and more of the available memory on each loop iteration and eventually may occupy it all

to free memory that you have allocated dynamically, you must still have access
to the address that references the block of memory

free(pNumber);
pNumber = NULL;

you should always set the pointer to NULL after the memory that it points to has been freed.


3. calloc
it allocates memory as a number of elements of a given size
it initializes the memory that is allocated so that all bytes are zero

int*pNumber = (int*)calloc(75, sizeof(int));

the return value will be NULL if it was not possible to allcoate the memory requested
very similar to using malloc(), but the big plus is that you know the memory area will be initialized to 0


4. realloc
the realloc() function enables you to reuse or extend memory that you previously allocated using malloc() or calloc()
the most important feature of this operation is that realloc() preserves the contents of the original memory area.

GUIDELINES
avoid allocating lots of small amounts of memory
only hang on to the memory as long as you need it
always ensure that you provide for releasing memory that you have allcoated
make sure you do not inadvertently overwrite the address of memory you have allocated on the heap before you have released it
it will cause a memory leak, so be especially careful when allcating memory within a loop
********************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = NULL;

    // Initial memory allocation
    str = (char*)malloc(15 * sizeof(char));
    strcpy(str, "jason");
    printf("String = %s, Address = %u\n", str, str);

    // Reallocating memory
    str = (char*)realloc(str, 25 * sizeof(char));
    strcat(str, ".com");
    printf("String = %s, Address = %u\n", str, str);

    free(str);
    // str = NULL;

    return 0;
}
