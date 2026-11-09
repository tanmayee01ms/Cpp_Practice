#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float fNo;
    double dNo;

    cout<<"Enter Any float Decimal No.";
    cin>>fNo; 

    cout<<"Enter Any double Decimal No.";
    cin>>dNo; 

    cout<<fNo<< endl;
    cout<< setprecision(3)<< fNo << endl;

    cout<<dNo<<endl; 
    cout<< setprecision(8)<< dNo << endl;

    return 0;
}