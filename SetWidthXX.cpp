#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
    string Str1;
    string Str2;

    cout<<"Enter 1st String (len=5): ";
    cin>>Str1;

     cout<<"Enter 2nd String (len=5): ";
    cin>>Str2;

    cout<<left<<setw(11)<<Str1;
    cout<<left<<setw(11)<<Str2;
     cout<<":"<<endl;

     cout<<left<<setw(11)<<Str1;
    cout<<left<<setw(11)<<Str2;
     cout<<":"<<endl<<endl;

      cout<<":";
    cout<<right<<setw(11)<<Str1;
    cout<<right<<setw(11)<<Str2<<endl;

    cout<<":";
    cout<<right<<setw(11)<<Str1;
    cout<<right<<setw(11)<<Str2;
    

    return 0;
}