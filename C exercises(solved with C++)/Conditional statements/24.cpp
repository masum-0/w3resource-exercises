#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;

    cin>>x;

    if(x==2)
        cout<<"28 days"<<endl<<"In leap year month have 29 days"<<endl;
    else if((x>=1 && x<=7) && x%2==1)
        cout<<"31 days"<<endl;
    else if((x>=8 && x<=12) && x%2==0)
        cout<<"31 days"<<endl;
    else if((x>=1 && x<=7) && x%2==0)
        cout<<"30 days"<<endl;
    else if((x>=8 && x<=12) && x%2==1)
        cout<<"30 days"<<endl;
    else
        cout<<"Invalid Month Number"<<endl;


    return 0;
}




