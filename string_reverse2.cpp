#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s); // full line input nibo
    stringstream ss(s);
    string word;    // ata moloto arekta string declare korsi jekhane word gulo store korte cai

    while(ss>>word)  // word variable ss teke sob gola aste aste nite takbe 
    {
        cout << word<< endl;

    }
}