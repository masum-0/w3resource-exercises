#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    float d,root1,root2;

    cin>>a>>b>>c;

    d = b*b - 4*a*c;
    root1 = (-b+sqrt(d))/2*a;
    root2 = (-b-sqrt(d))/2*a;

    if(d==0)
    {
        cout<<"Roots are same"<<endl<<"First root : "<<root1<<endl<<"Second root : "<<root2<<endl;
    }
    else if(d>0)
    {
        cout<<"Roots are real and different"<<endl<<"First root : "<<root1<<endl<<"Second root : "<<root2<<endl;
    }
    else
        cout<<"Roots are imaginary"<<endl<<"No solution"<<endl;

    return 0;
}
