#include<stdio.h>
void main()
{
    int i,n,p[50],bt[50],wt[50],tat[50],totalwt=0,totaltat=0;
    printf("Enter no: of processes:");
    scanf("%d",&n);
    printf("Enter burst time:\n");
    for(i=0;i<n;i++)
    {
        printf("P%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
        wt[i]=wt[i-1]+bt[i-1];
    for(i=0;i<n;i++)
        tat[i]=wt[i]+bt[i];
    printf("Processes\tBurst time\tWaiting time\tTurnaround time \n");
    for(i=0;i<n;i++)
    {
        printf("p%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
        totalwt+=wt[i];
        totaltat+=tat[i];
    }
    printf("Average waiting time=%f\n",(float)totalwt/n);
    printf("Average turnaround time=%f",(float)totaltat/n);
}