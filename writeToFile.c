#include <stdio.h>

int main()
{
    FILE *fptr;
    char filename[50];

    printf("Enter the filename of the file to create:  ");
    gets(filename);
    fptr = fopen(filename, "w");

    // write to file
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %d %f\n", 100, "Widget", 0.50);
    fputs("End of List", fptr);

    return 0;
}