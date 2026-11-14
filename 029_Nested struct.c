
#include <stdio.h>
#include <math.h>

enum coordinate_type
{
    RECTANGULAR,
    POLAR
};

struct complex_struct
{
    enum coordinate_type t;
    double x;
    double y;
};

struct segment
{
    struct complex_struct start;
    struct complex_struct end;
};

double distance(struct segment s)
{
    double dx = s.end.x - s.start.x;
    double dy = s.end.y - s.start.y;
    double D =sqrt(dx*dx+dy*dy);
    return D;
}

int main(void)
{
    struct segment s = {
        {RECTANGULAR, 1.0, 2.0},
        {RECTANGULAR, 4.0, 6.0}
    };
    double result=distance(s);
    printf("æ‡¿Î «:%.2f",result);

    return 0;
}
  