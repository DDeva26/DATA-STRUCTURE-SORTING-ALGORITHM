 Implement sorting of Passenger Names using Insertion Sort Algorithm

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct passenger{
char name[50];
};

void main()
{
clrscr();
 struct passenger s[50];
 struct passenger temp;
 int i,j,n;
 printf("enter number of passengers :");
 scanf("%d",&n);

 printf("enter the information of passengers: ");

 for(i=0;i<n;i++)
 {
  printf("\n enter passenger %d name :",i+1);
  scanf("%s",&s[i].name);
 }

 for(i=1;i<n;i++)
 {
   strcpy(temp.name,s[i].name);
   j=i-1;
   while((strcmpi(temp.name,s[j].name)<0) && (j>=0))
   {
    strcpy(s[j+1].name,s[j].name);
     j=j-1;
   }
    strcpy(s[j+1].name,temp.name);
 }

  printf("\n Displaying information of passengers: \n");

  for(i=0;i<n;i++)
  {
   printf(" \n");
   puts(s[i].name);
  }
  getch();

}






