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

double real_part(struct complex_struct z)
{
    if (z.t==RECTANGULAR)
    {
        return z.x;
    }
    else
    {
        return z.x*cos(z.y);
    }
    
}

double img_part(struct complex_struct z)
{
    if (z.t==RECTANGULAR)
    {
        return z.y;
    }
    else
    {
        return z.x*sin(z.y);
    }
}

double angle(struct complex_struct z)
{
    
    if (z.t==RECTANGULAR)
    {
        return atan2(z.y, z.x);
    }
    else
    {
        return z.y;
    }
   
}

double magnitude(struct complex_struct z)
{
    if (z.t == RECTANGULAR)
    {
       double magnitude= sqrt(z.x*z.x + z.y*z.y);
    }
    else
    {
        return z.x;
    }
}


struct complex_struct make_from_real_img(double x, double y)
{
    struct complex_struct z;

    z.t = RECTANGULAR;
    z.x = x;
    z.y = y;

    return z;
}

struct complex_struct make_from_mag_ang(double r, double theta)
{
    struct complex_struct z;

    z.t = POLAR;
    z.x = r;
    z.y = theta;

    return z;
}

struct complex_struct add_complex( struct complex_struct a,struct complex_struct b)
{
    double x= real_part(a)+real_part(b);
    double y= img_part(a)+img_part(b);
    return make_from_real_img( x,  y);
    
}

struct complex_struct sub_complex( struct complex_struct a,struct complex_struct b)
{
     double x= real_part(a)-real_part(b);
    double y= img_part(a)-img_part(b);
    return make_from_real_img( x,  y);
}

struct complex_struct mul_complex( struct complex_struct a,struct complex_struct b)
{ 
    double x= real_part(a)*real_part(b)-img_part(a)*img_part(b);
    double y=real_part(a)*img_part(b)+img_part(a)*real_part(b);
    return make_from_real_img( x,  y);
    
}

struct complex_struct div_complex(struct complex_struct a,struct complex_struct b)
{
    double denominator=real_part(b)*real_part(b)+img_part(b)*img_part(b);
    double x=(real_part(a)*real_part(b)+img_part(a)*img_part(b))/denominator;
    double y=(real_part(b)*img_part(a)-img_part(b)*real_part(a))/denominator;
    return make_from_real_img(x, y);
}

void print_complex(struct complex_struct z)
{
    double x = real_part(z);
    double y = img_part(z);

    if (img_part(z)==0)
    {
        printf("%.2f\n",x);
    }
    else if (real_part(z)==0)
    {
        printf("%.2fi\n",y);
    }
    else if (img_part(z)>0)
    {
        printf("%.2f+%.2fi\n",x,y);
    }
    else
    {
        printf("%.2f%.2fi\n",x,y);
    }
}


int main(void)
{
    struct complex_struct a = make_from_real_img(3, 4);
    struct complex_struct b = make_from_mag_ang(5, 0);

    printf("A: ");
    print_complex(a);

    printf("B: ");
    print_complex(b);

    printf("Magnitude A = %.2f\n", magnitude(a));
    printf("Magnitude B = %.2f\n", magnitude(b));

    printf("Addition: ");
    print_complex(add_complex(a, b));

    printf("Subtraction: ");
    print_complex(sub_complex(a, b));

    printf("Multiplication: ");
    print_complex(mul_complex(a, b));

    printf("Division: ");
    print_complex(div_complex(a, b));

    return 0;
}
