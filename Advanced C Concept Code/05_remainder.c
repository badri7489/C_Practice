#include <stdio.h>
#include <math.h>

int main()
{
    // integer numbers
    int a = 10;
    int b = 3;

    // float numbers
    float m = 10.23f;
    float n = 3.1f;

    // double numbers
    double x = 123456789.10;
    double y = 1233.1;

    printf("remainder(%d,%d) = %lf\n", a, b, remainder(a, b));
    printf("remainder(%f,%f) = %lf\n", m, n, remainder(m, n));
    printf("remainder(%lf,%lf) = %lf\n", x, y, remainder(x, y));

    return 0;
}
