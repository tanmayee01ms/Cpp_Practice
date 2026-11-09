#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int No1;
    int No2;

    cout<<"Enter 1st Number (len=2): ";
    cin>>No1;

     cout<<"Enter 2nd Number (len=2): ";
    cin>>No2;

    cout<<left<<setw(5)<<No1;
    cout<<left<<setw(5)<<No2;
     cout<<":"<<endl;

     cout<<left<<setw(5)<<No1;
    cout<<left<<setw(5)<<No2;
     cout<<":"<<endl;

    return 0;
}