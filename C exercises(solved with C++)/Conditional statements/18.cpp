#include<bits/stdc++.h>

using namespace std;

int main()
{
    float cp,sp;

    cin>>cp>>sp;

    if(cp>sp)
        cout<<"Loss : "<<cp-sp<<endl;
    else if(cp<sp)
        cout<<"Profit : "<<sp-cp<<endl;
    else
        cout<<"No profit or loss"<<endl;

    return 0;
}

