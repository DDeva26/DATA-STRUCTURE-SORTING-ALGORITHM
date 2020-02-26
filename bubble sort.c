 Implement sorting of Train numbers using Bubble Sort Algorithm

#include<stdio.h>
#include<conio.h>
void main()
{
int array[100],n,c,d,swap;
clrscr();
printf("enter number of train numbers \n");
scanf("%d",&n);
for(c=0;c<n;c++){
printf("enter train number ");
scanf("%d",&array[c]);
}
for(c=0;c<(n-1);c++){
for(d=0;d<n-c-1;d++){
if (array[d]>array[d+1])
{
swap=array[d];
array[d]=array[d+1];
array[d+1]=swap;
  }
 }
}
printf("sorted list in ascending order:\n");
for(c=0;c<n;c++)
printf("%d\n",array[c]);
getch();

}