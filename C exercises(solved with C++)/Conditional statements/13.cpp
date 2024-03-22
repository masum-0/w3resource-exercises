#include<bits/stdc++.h>

using namespace std;

int main()
{
    float c;
    cin>>c;

    if(c>=40)
        cout<<"Its very hot"<<endl;
    else if(c<40 && c>=30)
        cout<<"Its hot"<<endl;
    else if(c<30 && c>=20)
        cout<<"Normal Temperature"<<endl;
    else if(c<20 && c>=10)
        cout<<"Cold Weather"<<endl;
    else if(c<10 && c>=0)
        cout<<"Very Cold Weather"<<endl;
    else
        cout<<"Freezing Weather"<<endl;

    return 0;
}

