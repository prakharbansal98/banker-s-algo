#include<stdio.h>
int main()
{
int p,allocation[5],max[5],need[5],available,i,j,flag[5],x=0,sequence[5],c=0;
printf("Enter the number of processes : ");
scanf("%d",&p);
printf("\n");
for (i=0;i<p;i++)
{
    flag[i]=0;  //initially no process's need is fulfilled
}
for(i=0;i<p;i++)
{
    printf("Enter the ALLOCATION for process P[%d] : ",i);
    scanf("%d",&allocation[i]);
    printf("\n");
    printf("Enter the MAX for process P[%d] : ",i);
    scanf("%d",&max[i]);
    printf("\n");
}
printf("Enter the AVAILABLE resources : ");
scanf("%d",&available);
printf("\n");
}

for(int i=0;i<p;i++)
{
    need[i]=max[i]-allocation[i];
}
for(i=0;i<p;i++)
{
    printf("Need of P[%d] is : %d",i,need[i]);
    printf("\n");
}

for(i=0;i<p;i++)
{
    for(j=0;j<p;j++)
    {
        if(flag[j]==0 && need[j]<=available)
        {
        available=available+allocation[j];
        flag[j]=1;
        printf("Process %d has been allocated resources\n",j);
        sequence[c]=j;
        c++;
        }
    }

