#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str= "Sheikh Mohammed Sayed Ali";

    for(auto it=str.begin();it<str.end();it++)  // string::iterator er jaygay 'auto' use kora hoise
    {
        cout<<*it<<endl; 

    }
    return 0;
}