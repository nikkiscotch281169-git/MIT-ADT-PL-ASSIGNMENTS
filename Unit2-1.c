
#include <stdio.h>

int main()
{
    int a, b, c, result;

    a = 10;
    b = 5;
    c = 2;

    result = a + b * c;
    printf("a + b * c = %d\n", result);

    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result);

    result = a - b - c;
    printf("a - b - c = %d\n", result);

    result = a / b * c;
    printf("a / b * c = %d\n", result);

    return 0;
}
