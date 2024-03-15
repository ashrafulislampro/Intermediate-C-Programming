#include <stdio.h>

int main()
{
    FILE *fptr;
    int stock;
    char buffer[200], item[10], c;
    float price;

    // myfile.txt: Inventory\n100 Widget 0.29\nEnd of list
    fptr = fopen("myfile.txt", "w");
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);
    fclose(fptr);
    // myfile.txt: Inventory\n100 Widget 0.29\nEnd of list
    fptr = fopen("myfile.txt", "r");
    fgets(buffer, 20, fptr);
    printf("%s\n", buffer);
    fscanf(fptr, "%d%s%f", &stock, item, &price); // read data
    printf("%d %s %4.2f\n", stock, item, price);
    while ((c = fgetc(fptr)) != EOF) // read the rest of the file
        printf("%c", c);
    fclose(fptr);

    return 0;
}