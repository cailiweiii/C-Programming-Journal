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
    double x= (real_part(a)*real_part(b))-(img_part(a)*img_part(b));
    double y= (real_part(a)*img_part(b))+(img_part(a)*real_part(b));
    return make_from_real_img( x,  y);
    
}

int main(void)
{
    struct complex_struct a = make_from_real_img(3, 4);
    struct complex_struct b = make_from_real_img(2, 5);
    struct complex_struct c = add_complex(a,b);
    struct complex_struct d = sub_complex(a,b);
    struct complex_struct e = mul_complex(a,b);
    printf("加:%.2f %.2f\n",c.x,c.y);
    printf("减:%.2f %.2f\n",d.x,d.y);
    printf("乘:%.2f %.2f\n",e.x,e.y);
    return 0;
}