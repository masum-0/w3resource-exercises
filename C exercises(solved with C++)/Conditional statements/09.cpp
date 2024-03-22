#include<iostream>

using namespace std;

int main()
{
    float x,y;

    cin>>x>>y;

    if (x>0 && y>0)
        cout<<"The coordinate point lies in the first quadrant"<<endl;
    else if (x<0 && y>0)
        cout<<"The coordinate point lies in the second quadrant"<<endl;
    else if (x<0 && y<0)
        cout<<"The coordinate point lies in the third quadrant"<<endl;
    else if (x>0 && y<0)
        cout<<"The coordinate point lies in the fourth quadrant"<<endl;
    else if (x==0 && y==0)
        cout<<"The coordinate point lies in the origin"<<endl;
    return 0;
}
