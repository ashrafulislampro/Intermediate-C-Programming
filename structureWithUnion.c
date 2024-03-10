#include <stdio.h>
#include <string.h>

typedef struct
{
    char make[20];
    int model_year;
    int id_type;
    union
    {
        int id_num;
        char VIN[20];
    } id;
} vehicle;

vehicle car1;

int main()
{
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 1235;

    printf("Car %d, model Year: %d Car Id: %d\n", car1.id_type, car1.model_year, car1.id.id_num);

    return 0;
}
