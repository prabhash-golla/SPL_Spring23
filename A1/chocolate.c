#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "setops.h"
#include "settype.h"   
int howmanypackets(int N)
{
    int t=0,p;
    numset S = setinit(N);
    while(setsize(S)<N)
    {
        t++;
        p=1+rand()%N;
        S=setaddelt(S,p);
        #ifndef STAT_MODE
        printf("Packet %d has coupon %d,Available coupons : ",t,p);
        setprint(S);
        #endif
    }
    return t;
}
int main()
{
    srand((unsigned int) time(NULL));
    int N;
    printf("Number of coupons(N):");
    scanf("%d",&N);
    #ifndef STAT_MODE
    int t= howmanypackets(N);
    printf("-- %d packets were Bought\n",t);
    #endif

    #ifdef STAT_MODE
    int k=1000;
    int t=0;
    printf("+++ stastistics Mode\n");
    while(k--)
    {
        t  = t + howmanypackets(N);
    }
    printf("--- Average number of Packets to buy = %f\n",t/1000.0);
    #endif
    exit(0);
}