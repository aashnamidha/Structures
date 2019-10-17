#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct emp
{
 char name[20];
 int emp_id;
 int year;
 char city[20];
};
struct emp e[20];
void enter();
void display();
int n;
int main() 
{ 
 struct emp e[5];
 enter();
 display();
 return 0;
}
void enter()
{
 int i=0;
 printf("\n Enter the number of records to be stored: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEnter Name of Employee: ");
  scanf("%s",&e[i].name);
  printf("Enter Employee ID: ");
  scanf("%d",&e[i].emp_id);
  printf("Enter year of joining: ");
  scanf("%d",&e[i].year);
  printf("Enter City: ");
  scanf("%s",&e[i].city);
 }
}
void display()
{
 int j=0;
 printf("\n The stored data is: ");
 for(j=0;j<n;j++)
 {
  printf("\nName: %s \nEmployee ID: %d \nYear: %d \nCity: %s",e[j].name,e[j].emp_id,e[j].year,e[j].city);
 }
}
