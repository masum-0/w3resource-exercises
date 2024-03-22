#include<bits/stdc++.h>

using namespace std;

int main()
{
    char x;

    cin>>x;

    x = toupper(x);

    if(x=='E')
        cout<<"Excellent"<<endl;
    else if(x=='V')
        cout<<"Very Good"<<endl;
    else if(x=='G')
        cout<<"Good"<<endl;
    else if(x=='A')
        cout<<"Average"<<endl;
    else if(x=='F')
        cout<<"Fail"<<endl;
    else
        cout<<"Invalid input"<<endl;

    return 0;
}

