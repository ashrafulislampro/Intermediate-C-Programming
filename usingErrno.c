#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

extern int errno;

int main()
{
    FILE *fptr;

    errno = 0;
    fptr = fopen("c:\\nonexistantfile.txt", "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error opening file. Error Code: %d\n", errno);
        exit(EXIT_FAILURE);
    }
    return 0;
}