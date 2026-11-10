
#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);
double area(double radius);
double area_point(double x1, double y1, double x2, double y2);

int main(void)
{
    double S = area_point(1.0, 2.0, 4.0, 6.0);
    printf("S=%.2f", S);

    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    double dx;
    double dy;
    dx = x2 - x1;
    dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

double area(double radius)
{
    double S = M_PI * radius * radius;
    return (S);
}

double area_point(double x1, double y1, double x2, double y2)
{
    double r = distance(x1, y1, x2, y2);
    double S = area(r);
    return (S);
}
