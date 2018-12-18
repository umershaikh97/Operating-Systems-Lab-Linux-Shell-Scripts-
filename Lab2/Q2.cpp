
#include<iostream>
using namespace std;
main()
{
    string str;
    string rev;

    cout<<"Enter String : ";
    cin>>str;


    int j=0;
    for(int i=str.length()-1;i>=0;--i)
    {
       rev[j]=str[i];
        ++j;
    }

    bool flag=false;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=rev[i])
        {
            flag=true;
            break;
        }
    }

    if(!flag)
    cout<<"YES. It is a Palindrome";
    else
    cout<<"NO.  It is not Palindrome";

return 0;

}
