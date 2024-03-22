#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    cin>>c;

    if((c>=65 && c<=90) || (c>=97 && c<=122))
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            cout<<"Vowel"<<endl;
        else
            cout<<"Consonant"<<endl;
    }
    else
        cout<<"Invalid input!"<<endl;

    return 0;
}

