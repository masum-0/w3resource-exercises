#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    if(a==b && b==c)
        cout<<"Equilateral"<<endl;
    else if(a==b || b==c || c==a)
        cout<<"Isoscales"<<endl;
    else
        cout<<"Scalene"<<endl;

    return 0;
}

