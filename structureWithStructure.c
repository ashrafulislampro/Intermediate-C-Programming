#include <stdio.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
} point;

typedef struct
{
    float radius;
    point center;
} circle;

circle c = {4.5, {4, 6}};

int main()
{
    printf("%3.1f %d, %d\n", c.radius, c.center.x, c.center.y);
    return 0;
}