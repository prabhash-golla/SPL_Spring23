#include <stdio.h>
#include "../lib/order1/soln1.h"
#include "../lib/order2/soln2.h"
#include "../lib/order3/soln3.h"

int main()
{
    recrel1 r1;
    r1.c=2;
    r1.d=1;
    r1.a=0;
    recrel2 r2;
    r2.c1 =1;
    r2.c2=1;
    r2.d=-5;
    r2.a0=5;
    r2.a1=6;
    recrel3 r3;
    r3.c1=0;
    r3.c2=2;
    r3.c3=1;
    r3.d=0;
    r3.a0=0;
    r3.a1=1;
    r3.a2=1;
    int n;
    printf("n= ");
    scanf("%d",&n);
    printf("Toh(%d) = %d\n",n,findterm1(n,r1));
    printf("Fib(%d) + 5 = %d\n",n,findterm2(n,r2));
    printf("Fib(%d) = %d\n",n,findterm3(n,r3));

    return 0;
}