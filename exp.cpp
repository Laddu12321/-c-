#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"a b"<<endl;
cin>>a>>b;
try
{
if(b==0)
throw b;
c=a/b;
cout<<"c"<<c;
}
catch(int b)
{
cout<<"exception"<<endl;
}
return 0;
}
