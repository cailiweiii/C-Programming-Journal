
#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);
double area(double radius);

int main(void)
{
    double r = distance(1.0, 2.0, 4.0, 6.0);
    printf("Distance: %.2f\n", r);
    double S = area(r);
    printf("S=%.2f", S);

    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    double dx;
    double dy;
    dx = x2 - x1;
    dy = y2 - y1;
    printf("dx=%.2f\n", dx);
    printf("dy=%.2f\n", dy);
    return sqrt(dx * dx + dy * dy);
}

double area(double radius)
{
    double S = M_PI * radius * radius;
    return (S);
}
