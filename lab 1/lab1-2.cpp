#include <iostream>
using namespace std;
int main()
{
int n,c=0;
cout<<"enter a numbers";
cin>>n;
while(n>0)
{
n=n/10;
c++;
}
cout<<"the number of digits are:"<<c<<endl;
}
