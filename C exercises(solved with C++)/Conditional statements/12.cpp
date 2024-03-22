#include<bits/stdc++.h>

using namespace std;

int main()
{
    int roll,phy,chem,ca;
    string name,div;

    cout<<"Input the roll of the student : "<<endl;
    cin>>roll;
    cout<<"Input the name of the student : "<<endl;
    cin>>name;
    cout<<"Input the marks of Physics, Chemistry and Computer Application : "<<endl;
    cin>>phy>>chem>>ca;

    int total=phy+chem+ca;
    float per=(float)total/3;

    if(per>=60)
        div="First";
    else if(per<60 && per>=48)
        div="Second";
    else if(per<48 && per>=33)
        div="Pass";
    else
        div="Fail";

    cout<<"Roll No : "<<roll<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Marks in Physics : "<<phy<<endl;
    cout<<"Marks in Chemistry : "<<chem<<endl;
    cout<<"Marks in Computer Application : "<<ca<<endl;
    cout<<"Total Marks : "<<total<<endl;
    cout<<"Percentage: "<<per<<endl;
    cout<<"Division : "<<div<<endl;


    return 0;
}

