#include<stdio.h>
void main()
{
int i,j,n,m,Allocation[10][10],Available[10],Max[10][10],Need[10][10];
printf("Enter no. of processes & no. of resources");
scanf("%d%d",&n,&m);
printf("Enter the available  matrix:");
for(i=0;i<m;i++)
{
scanf("%d",&Available[i]);
}
printf("Enter the allocation  matrix:");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&Allocation[i][j]);
}
}
printf("Enter the MAX  matrix:");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&Max[i][j]);
}
}
//Find Need matrix
for(i=0;i<n;i++)
  for(j=0;j<m;j++)
    Need[i][j]=Max[i][j]-Allocation[i][j];
//Display Allocation,MAX,Need
printf("\n\tAllocation\n ");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
  printf("%d",Allocation[i][j]);
printf("\t");
}
printf("\n");
}
printf("\n\tMAX\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d",Max[i][j]);
printf("\t");
}
printf("\n");
}
printf("\n\tNeed\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
  printf("%d",Need[i][j]);
printf("\t");
}
printf("\n");
}
printf("\nAvailable \n");
for(j=0;j<m;j++)
{
  printf("%d",Available[j]);
printf("\t");
}
printf("\n");
}
