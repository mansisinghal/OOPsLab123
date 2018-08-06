#include<iostream>
using namespace std;
int main()
{
int i,j,rem=1,k=1;
cout<<"enter a numbers i and j";
cin>>i>>j;
while(rem<=i)
{
rem=k*j;
k++;
}
cout<<"next largest multiple of j:"<<rem<<endl;
}
