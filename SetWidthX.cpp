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

     cout<<":";
    cout<<right<<setw(5)<<No1;
    cout<<right<<setw(5)<<No2<<endl;

    cout<<":";
    cout<<right<<setw(5)<<No1;
    cout<<right<<setw(5)<<No2;
    

    return 0;
}