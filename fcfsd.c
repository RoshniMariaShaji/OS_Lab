#include<stdio.h>
#include<stdlib.h>
void main()
{
    int rq[50],n,i,initial,total=0;
    printf("Enter no: of request:");
    scanf("%d",&n);
    printf("Enter the request sequence:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&rq[i]);
    }
    printf("Enter the initial head position:");
    scanf("%d",&initial);
    for(i=0;i<n;i++)
    {
        total+=abs(rq[i]-initial);
        initial=rq[i];
    }
    printf("Total head movement is %d",total);
}