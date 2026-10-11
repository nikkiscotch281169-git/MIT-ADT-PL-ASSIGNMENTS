
#include <stdio.h>

/* 1. With arguments and with return value */
float area1(float b, float h)
{
    return 0.5 * b * h;
}

/* 2. With arguments and without return value */
void area2(float b, float h)
{
    printf("Area (Type 2) = %.2f\n", 0.5 * b * h);
}

/* 3. Without arguments and with return value */
float area3()
{
    float b, h;

    printf("Enter base and height for Type 3: ");
    scanf("%f %f", &b, &h);

    return 0.5 * b * h;
}

/* 4. Without arguments and without return value */
void area4()
{
    float b, h;

    printf("Enter base and height for Type 4: ");
    scanf("%f %f", &b, &h);

    printf("Area (Type 4) = %.2f\n", 0.5 * b * h);
}

int main()
{
    float b, h, result;

    printf("Enter base and height for Type 1: ");
    scanf("%f %f", &b, &h);

    result = area1(b, h);
    printf("Area (Type 1) = %.2f\n", result);

    printf("Enter base and height for Type 2: ");
    scanf("%f %f", &b, &h);
    area2(b, h);

    result = area3();
    printf("Area (Type 3) = %.2f\n", result);

    area4();

    return 0;
}
