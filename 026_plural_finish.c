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

struct complex_struct make_from_real_img(double x, double y)
{
    struct complex_struct z;
    z.x = x;
    z.y = y;

    return z;
}


struct complex_struct add_complex(
    struct complex_struct a,
    struct complex_struct b)
{
    double x= real_part(a)+real_part(b);
    double y= img_part(a)+img_part(b);
    return make_from_real_img( x,  y);
    
}

struct complex_struct sub_complex(
    struct complex_struct a,
    struct complex_struct b)
{
     double x= real_part(a)-real_part(b);
    double y= img_part(a)-img_part(b);
    return make_from_real_img( x,  y);
}

struct complex_struct mul_complex(
    struct complex_struct a,
    struct complex_struct b)
{ 
    double x= real_part(a)*real_part(b)-img_part(a)*img_part(b);
    double y=real_part(a)*img_part(b)+img_part(a)*real_part(b);
    return make_from_real_img( x,  y);
    
}

struct complex_struct div_complex(
    struct complex_struct a,
    struct complex_struct b)
{
    double denominator=real_part(b)*real_part(b)+img_part(b)*img_part(b);
    double x=(real_part(a)*real_part(b)+img_part(a)*img_part(b))/denominator;
    double y=(real_part(b)*img_part(a)-img_part(b)*real_part(a))/denominator;
    return make_from_real_img(x, y);
}


int main(void)
{
    print_complex(make_from_real_img(3, 4));
    print_complex(make_from_real_img(3, -4));
    print_complex(make_from_real_img(0, -2));
    print_complex(make_from_real_img(5, 0));
    return 0;
}