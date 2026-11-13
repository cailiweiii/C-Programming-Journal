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


struct complex_struct make_from_mag_ang(double r, double theta)
{
    struct complex_struct z;

    z.x =r * cos(theta) ;

    z.y = r * sin(theta);

    return z;
}


double magnitude(struct complex_struct z)
{
    return sqrt(z.x * z.x + z.y * z.y);
}

int main(void)
{
    struct complex_struct a = make_from_mag_ang(5, 60);

    printf("Real = %.1f\n", real_part(a));
    printf("Imaginary = %.1f\n", img_part(a));
    printf("Magnitude = %.1f\n", magnitude(a));
    printf("Angle = %.4f\n", angle(a));

    return 0;
}