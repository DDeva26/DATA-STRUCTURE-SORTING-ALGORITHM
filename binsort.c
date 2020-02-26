 Implement sorting of Station Names using Bin Sort Algorithm

#include<stdio.h>
#include<conio.h>
int main()
{
int unsorted[50],bucket[10][50]={{0}},sorted[50];
int j,k,m,p,flag=0,num,n;
clrscr();
printf("enter the no.of elements to be sorted:");
scanf("%d",&n);
printf("enter the elements to be sorted");
for(k=0;k<n;k++)
{
scanf("\n%d",&num);
sorted[k]=unsorted[k]=num;
 }
for(p=1;flag!=n;p*=10)
{
flag=0;
for(k=0;k<n;k++)
{
bucket[(sorted[k]/p)%10][k]=sorted[k];
if((sorted[k]/p)%10==0)
{
flag++;
}
}
if(flag==n)
{
printf("sorted list");
for(j=0;j<n;j++)
{
printf("%d\n",sorted[j]);
}
getch();
return 0;
}for(j=0,m=0;j<10;j++)
{
for(k=0;k<n;k++)
{
if(bucket[j][k]>0)
{
sorted[m]=bucket[j][k];
bucket[j][k]=0;
m++;
}
}
}
}
return 0;
}



