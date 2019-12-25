#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int n,a[30],i,j,temp;
cout<<"enter size of array:";
cin>>n;
cout<<"enter elements in an array:";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"sorted array using insertion sort is:\n";
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while((temp<a[j])&&(j>=0))
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
cout<<"array after sorting is:\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
getch();
}