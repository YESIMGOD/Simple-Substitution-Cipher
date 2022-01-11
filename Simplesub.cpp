#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cout<<"Enter string: "<<endl;
    getline(cin,n);
    int i,k,l=n.length();
    cout<<"Enter the required key: "<<endl;
    cin>>k;
    if(k==3)
    {
        // When key = 3, then Simple Substitution Cipher is known as Caesar Cipher
        cout<<".....! CASER CIPHER !....."<<endl;
    }
    char a[l],b[l];
    for(i=0;i<l;i++)
    {
        a[i]=n.at(i);        
    }
    cout<<"Encrypted String: "<<endl;
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            b[i]=' ';
        }
        else
        {
            b[i]=static_cast<char>(a[i]+k);
        }
    }
    for(i=0;i<l;i++)
    {
        cout<<(char)toupper(b[i])<<" ";
    }
    return 0;
}