#include<stdio.h>
#include<stdlib.h>
#include "setops.h"

void setprint(numset S)
{
    int t=0;
    printf("{");
    for(int i=1;i<=S[0];i++)
    {
        if(S[i]!=0)
        {
            if(t!=0)
            printf(", %d",i);
            else
            printf("%d",i);
            t++;
        }
    }
    printf("}\n");
}

int setsize(numset S)
{
    int t=0;
    for(int i=1;i<=S[0];i++)
    {
        if(S[i]!=0)
        {
            t++;
        }
    }
    return t;
}

numset setaddelt(numset S,int i)
{
    if(S[i]==0)
    {
        S[i]=1;
    }
    return S;
}

numset setdelelt(numset S,int i)
{
    if(S[i]==1)
    {
        S[i]=0;
    }
    return S;
}

numset setunion(numset A,numset B)
{
    int N = (A[0]>B[0])? A[0]:B[0];
    numset Set = (numset)malloc((N+1)*sizeof(int));
    Set[0]=N;
    for(int i=1;i<N+1;i++)
    {
        if(A[i]==1 || B[i]==1)
        {
            Set[i]=1;
        }
        else
        {
            Set[i]=0;
        }
    }
    return Set;
}

numset setintersection(numset A,numset B)
{
    int N = (A[0]>B[0])? A[0]:B[0];
    numset Set = (numset)malloc((N+1)*sizeof(int));
    Set[0]=N;
    for(int i=1;i<N+1;i++)
    {
        if(A[i]==1 && B[i]==1)
        {
            Set[i]=1;
        }
        else
        {
            Set[i]=0;
        }
    }
    return Set;
}