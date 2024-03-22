#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a;

    cin>>a;

    if(a<=57 && a>=48)
        cout<<"The character is a digit"<<endl;
    else if((a<=90 && a>=65) || (a<=122 && a>=97))
        cout<<"The character is an alphabet"<<endl;
    else
        cout<<"Special character"<<endl;

    return 0;
}

