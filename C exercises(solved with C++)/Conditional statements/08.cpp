#include<iostream>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(a>=b && a>=c)
        cout<<a<<" is greatest"<<endl;
    else if(b>=c && b>=a)
        cout<<b<<" is greatest"<<endl;
    else
        cout<<c<<" is greatest"<<endl;

    return 0;
}
