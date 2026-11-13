#include <stdio.h>
#include <math.h>

struct complex_struct
{
    double x;
    double y;
};

double real_part(struct complex_struct z)
{
    return z.x;
}

double img_part(struct complex_struct z)
{
    return z.y;
}

double angle(struct complex_struct z)
{
    return atan2(z.y, z.x);
}

struct complex_struct make_from_real_img(double x, double y)
{
    struct complex_struct z;
    z.x = x;
    z.y = y;

    return z;
}

double magnitude(struct complex_struct z)
{
    return sqrt(z.x * z.x + z.y * z.y);
}

int main(void)
{
    struct complex_struct a = make_from_real_img(3, 4);

    printf("Real = %.1f\n", real_part(a));
    printf("Imaginary = %.1f\n", img_part(a));
    printf("Magnitude = %.1f\n", magnitude(a));
    printf("Angle = %.4f\n", angle(a));

    return 0;
}