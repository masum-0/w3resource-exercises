#include<bits/stdc++.h>

using namespace std;

int main()
{
    int custid, conu;
    float chg, surchg = 0, gramt, netamt;
    char connm[25];

    cout<<"Input Customer ID :"<<endl;
    cin>>custid;
    cout<<"Input the name of the customer :"<<endl;
    cin>>connm;
    cout<<"Input the unit consumed by the customer : "<<endl;
    cin>>conu;

    if (conu < 200)
        chg = 1.20;
    else if (conu >= 200 && conu < 400)
        chg = 1.50;
    else if (conu >= 400 && conu < 600)
        chg = 1.80;
    else
        chg = 2.00;

    gramt = conu * chg;

    if (gramt > 400)
        surchg = gramt * (15 / 100.0);

    netamt = gramt + surchg;

    if (netamt < 100)
        netamt = 100;


    cout<<"Electricity Bill";
    cout<<"Customer ID :"<<custid<<endl;
    cout<<"Customer Name :"<<connm<<endl;
    cout<<"Unit comsumed :"<<conu<<endl;
    cout<<"Amount Charges "<<chg<<" per unit :"<<gramt<<endl;
    cout<<"Surcharge amount :"<<surchg<<endl;
    cout<<"Net Amount Paid By the Customer :"<<netamt<<endl;

    return 0;
}

