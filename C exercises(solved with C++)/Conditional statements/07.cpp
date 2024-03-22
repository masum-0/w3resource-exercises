#include<iostream>

using namespace std;

int main()
{
    float height;

    cin>>height;

    if (height < 150.0)
        cout<<"The person is dwarf"<<endl;
    else if ((height >= 150.0) && (height < 165.0))
        cout<<"The person is average heighted"<<endl;
    else if ((height >= 165.0) && (height <= 195.0))
        cout<<"The person is taller"<<endl;
    else
        cout<<"The person height is abnormal"<<endl;

    return 0;
}
