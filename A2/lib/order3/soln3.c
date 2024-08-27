#include<stdio.h>
#include "soln3.h"
int findterm3(int n,recrel3 r)
{
    if(n==0) return r.a0;
    if(n==1) return r.a1;
    if(n==2) return r.a2;
    return r.c1*findterm3(n-1,r)+r.c2*findterm3(n-2,r)+r.c3*findterm3(n-3,r)+r.d;
}