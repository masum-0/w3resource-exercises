#include<iostream>

using namespace std;

int main()
{
    int a;

    cin>>a;

    if(a>0)
        cout<<a<<" is a positive number"<<endl;
    else if(a<0)
        cout<<a<<" is a negative number"<<endl;
    else
        cout<<"zero"<<endl;

    return 0;
}
