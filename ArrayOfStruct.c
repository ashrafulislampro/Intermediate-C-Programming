#include <stdio.h>

typedef struct
{
    int h;
    int w;
    int l;
} box;

int main()
{
    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
    int k, volumn;

    for (k = 0; k < 3; k++)
    {
        volumn = boxes[k].h * boxes[k].w * boxes[k].l;
        printf("Box %d volume = %d\n", k, volumn);
    }
    return 0;
}