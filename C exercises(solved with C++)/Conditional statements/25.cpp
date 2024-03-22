#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cho;
    float r,l,w,b,h,area;

    cout<<"Input 1 for area of circle"<<endl;
    cout<<"Input 2 for area of rectangle"<<endl;
    cout<<"Input 3 for area of triangle"<<endl;

    cout<<"Please entr your choice : "<<endl;
    cin>>cho;

    if(cho==1)
    {
        cout<<"Input radious of the circle : "<<endl;
        cin>>r;
        area=3.1416*r*r;
    }
    else if(cho==2)
    {
        cout<<"Input length and width of the rectangle : "<<endl;
        cin>>l>>w;
        area=l*w;
    }
    else if(cho==3)
    {
        cout<<"Input base and height of the triangle : "<<endl;
        cin>>b>>h;
        area=0.5*b*h;
    }
    else
        cout<<"Invalid Choice"<<endl;

    cout<<"The area is : "<<area<<endl;

    return 0;
}

