#include<iostream>

using namespace std;

int main()
{
    float phy,math,chem;

    cout<<"Input marks in Physics,Math and Chemistry : "<<endl;
    cin>>phy>>math>>chem;

    if(phy>=55 && math>=65 && chem>=50)
    {
        if((phy+math+chem)>=190 || (phy+math)>=140)
            cout<<"Eligible"<<endl;
        else
            cout<<"Not Eligible"<<endl;
    }
    else
        cout<<"Not Eligible"<<endl;

    return 0;
}
