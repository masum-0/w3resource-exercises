#include<bits/stdc++.h>

using namespace std;

int main()
{
    float cho,num1,num2,res;

    cout<<"Input 1 for Addition"<<endl;
    cout<<"Input 2 for Substraction"<<endl;
    cout<<"Input 3 for Multiplication"<<endl;
    cout<<"Input 4 for Division"<<endl;

    cout<<"Please enter your choice : "<<endl;
    cin>>cho;

    cout<<"Please enter two integers : "<<endl;
    cin>>num1>>num2;

    if(cho==1)
    {
        res=num1+num2;
    }

    else if(cho==2)
    {
        res=num1-num2;
    }
    else if(cho==3)
    {
        res=num1*num2;
    }
    else if(cho==4)
    {
        if(num2==0)
            cout<<"Divide by 0 is not possible"<<endl;
        else
            res=num1/num2;
    }
    else
        cout<<"Invalid Choice"<<endl;

    cout<<"The result is : "<<res<<endl;

    return 0;
}


