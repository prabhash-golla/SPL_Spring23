#include<stdio.h>
#include<stdlib.h>
#include "settype.h"

numset setinit(int N)
{
    numset Set = (numset)malloc((N+1)*sizeof(int));
    Set[0]=N;
    for(int i=1;i<N+1;i++)
    {
        Set[i]=0;
    }
    return Set;
}

numset setrand(int N)
{
    numset Set = (numset)malloc((N+1)*sizeof(int));
    Set[0]=N;
    int p,t=1+rand()%N; //t is the random size
    for(int i=1;i<N+1;i++)
    {
        Set[i]=0;
    }
    while(t)
    {
        p=1+rand()%N; //p be the random element generated in this call
        if(Set[p]!=1)
        {
            Set[p]=1;
            t--;
        }
    }
    return Set;
}

numset setrandsize(int N,int t)
{
    numset Set = (numset)malloc((N+1)*sizeof(int));
    Set[0]=N;
    int p;
    for(int i=1;i<N+1;i++)
    {
        Set[i]=0;
    }
    while(t)
    {
        p=1+rand()%N; //p be the random element generated in this call
        if(Set[p]!=1)
        {
            Set[p]=1;
            t--;
        }
    }
    return Set;
}

numset setdestroy(numset S)
{
    free(S);
    return NULL;
}