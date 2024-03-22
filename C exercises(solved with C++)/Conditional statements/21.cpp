#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;

    cin>>x;

    if(x==1)
        cout<<"Monday"<<endl;
    else if(x==2)
        cout<<"Tuesday"<<endl;
    else if(x==3)
        cout<<"Wednesday"<<endl;
    else if(x==4)
        cout<<"Thursday"<<endl;
    else if(x==5)
        cout<<"Friday"<<endl;
    else if(x==6)
        cout<<"Saturday"<<endl;
    else if(x==7)
        cout<<"Sunday"<<endl;
    else
        cout<<"Invalid input"<<endl;

    return 0;
}

