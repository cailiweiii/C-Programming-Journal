#include <stdio.h>
#include <stdlib.h>

struct rational
{
    int numerator;//分子
    int denominator;//分母
};

int numerator (struct rational z)
{
    return z.numerator;
}

int denominator (struct rational z)
{
    return z.denominator;
}



int gcd(int x, int y)
{
    if (y == 0)
    {
        return abs(x);
    }
    else if (abs(x) % abs(y) == 0)
    {
        return abs(y);
    }
    else
    {
        return gcd(abs(y), abs(x) % abs(y));
    }
}


struct rational make_rational(int numerator, int denominator)
{
    struct rational z;
    int x=numerator;
    int y=denominator;
    if (y==0)
    {
        printf("错误");
        exit(EXIT_FAILURE);
    }
    
    int d=gcd(x,y);
    z.numerator = numerator/d;
    z.denominator = denominator/d;
    if (z.denominator<0)
    {
        z.numerator=-z.numerator;
        z.denominator=-z.denominator;
    }
    
    return z;

}

void print_rational( struct rational z)
{
    if (z.numerator==0)
    {
        printf("0\n");
    }
    else if (z.denominator==1)
    {
        printf("%d\n",z.numerator);
    }
    
    else
    {
        printf("%d/%d\n",z.numerator,z.denominator);   
    }
    
}

struct rational add_rational(struct rational a,struct rational b)
{
    int x= numerator(a)*denominator(b)+numerator(b)*denominator(a);
    int y=denominator(a)*denominator(b);
    return make_rational(x,y);
}

struct rational sub_rational(struct rational a,struct rational b)
{
    int x= numerator(a)*denominator(b)-numerator(b)*denominator(a);
    int y=denominator(a)*denominator(b);
    return make_rational(x,y);
}

struct rational mul_rational(struct rational a,struct rational b)
{
    int x= numerator(a)*numerator(b);
    int y=denominator(a)*denominator(b);
    return  make_rational(x,y);
}

struct rational div_rational(struct rational a,struct rational b)
{
    int x= numerator(a)*denominator(b);
    int y=denominator(a)*numerator(b);
    return  make_rational(x,y);
}



int main(void)
{
    // 测试1：最大公约数
    printf("=== GCD Test ===\n");
    printf("gcd(18,24) = %d\n", gcd(18, 24));
    printf("gcd(-6,8) = %d\n", gcd(-6, 8));
    printf("gcd(0,8) = %d\n", gcd(0, 8));

    // 测试2：创建结构体与自动约分
    printf("\n=== Make Rational Test ===\n");

    printf("6/8 = ");
    print_rational(make_rational(6, 8));

    printf("2/-8 = ");
    print_rational(make_rational(2, -8));

    printf("-2/-8 = ");
    print_rational(make_rational(-2, -8));

    printf("0/5 = ");
    print_rational(make_rational(0, 5));

    printf("10/2 = ");
    print_rational(make_rational(10, 2));

    // 测试3：读取分子和分母
    printf("\n=== Member Access Test ===\n");

    struct rational a = make_rational(1, 8);
    struct rational b = make_rational(-1, 8);

    printf("numerator(a) = %d\n", numerator(a));
    printf("denominator(a) = %d\n", denominator(a));

    // 测试4：四则运算（包含零和负数）
    printf("\n=== Arithmetic Test 1 ===\n");

    printf("a + b = ");
    print_rational(add_rational(a, b));

    printf("a - b = ");
    print_rational(sub_rational(a, b));

    printf("a * b = ");
    print_rational(mul_rational(a, b));

    printf("a / b = ");
    print_rational(div_rational(a, b));

    // 测试5：另一组四则运算
    printf("\n=== Arithmetic Test 2 ===\n");

    struct rational c = make_rational(1, 8);
    struct rational d = make_rational(5, 8);

    printf("c + d = ");
    print_rational(add_rational(c, d));

    printf("c - d = ");
    print_rational(sub_rational(c, d));

    printf("c * d = ");
    print_rational(mul_rational(c, d));

    printf("c / d = ");
    print_rational(div_rational(c, d));

    return 0;
}
