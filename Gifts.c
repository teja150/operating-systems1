#include<stdio.h>
#include<string.h>
int i,j,n;//global variables
typedef struct//A Structure which contains name,position and gifts of a Student
{
char studentname[10];
int position;
int nofgift;
}invoice;
invoice a[50],temp;
Sorting()//Sorting on basis of number of gifts if gifts are equal then on basis of position
{
for( i=0;i<n;i++){
for(j=0;j<n;j++){
if(a[j].nofgift<a[j+1].nofgift){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;}
else if(a[j].nofgift==a[j+1].nofgift){
if(a[j].position>a[j+1].position){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}}}}

int main()//Main Function
{

printf("Enter Total Number Of Students\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the name of Student[%d]\n",(i+1));
scanf("%s",&a[i].studentname);
printf("Enter the positon of Student[%d] in queue\n",(i+1));
scanf("%d",&a[i].position);
printf("Enter the Total number  of gifts  Student[%d] is Carying\n",(i+1));
scanf("%d",&a[i].nofgift);
}
Sorting();
printf("The billing order is as follows:---\n");
for( i=0;i<n;i++)
{
printf("\n %s with %d gifts\n ",a[i].studentname,a[i].nofgift);
}
}
