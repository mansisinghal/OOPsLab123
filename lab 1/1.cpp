#include<iostream>
using namespace std;
int main()
{
int i,j;
cout<<"enter a number i and j";
cin>>i>>j;
i=i+j-(i%j);
cout<<"next largest multiple of j:"<<i<<endl;
}
