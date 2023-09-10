#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  fstream f1("x.txt",ios::out|ios::in|ios::trunc);
  if(f1)
    {cout<<"file has created\n";
      f1<<"hi pesce mandya";
      f1<<"\nkarnataka";
        string x;
        f1.seekg(0);
        getline(f1,x);
        cout<<x;
        getline(f1,x);
        cout<<"\n"<<x;
        f1.close();
      }
    else
        cout<<"file has not found";
}
