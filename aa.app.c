#include<iostream>
using namespace std;
int swap(int a,intb)
{
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int a,b;
cout<<"a b";
cin>>a>>b;
cout<<"before"<<"x"<<a<<"y"<<b;
cout<<"after"<<"x"<<b<<"y"<<a;
return 0;
}
