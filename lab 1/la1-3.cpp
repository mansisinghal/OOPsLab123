#include<iostream>
using namespace std;
int main()
{
int i,sq;
cout<<"enter a number";
cin>>i;
for(i=1000;i<10000;i++)
{
if (i%10==(i/10)%10&&(i/100)%10==(i/1000)%10)
{
sq=sqrt(i);
if((sq*sq)==i)
printf("%d\n",i);
}
}	
cout<<"four digit perfect square:"<<i<<endl;
}
