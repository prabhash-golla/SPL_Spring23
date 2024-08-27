#include<stdio.h>
#include "soln2.h"
int findterm2(int n,recrel2 r)
{
    if(n==0) return r.a0;
    if(n==1) return r.a1;
    return r.c1*findterm2(n-1,r)+r.c2*findterm2(n-2,r)+r.d;
}