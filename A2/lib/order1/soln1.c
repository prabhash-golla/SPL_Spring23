#include<stdio.h>
#include "soln1.h"
int findterm1(int n,recrel1 r)
{
    if(n==0) return r.a;
    return r.c*findterm1(n-1,r)+r.d;
}