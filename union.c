union val
{
    int int_num;
    float fl_num;
    char str[20];
};

union val u1 = {12, 2.4, "Intermediate C"};
union val u2;

// u2 = u1;