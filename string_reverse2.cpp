#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s); // full line input nibo
    stringstream ss(s);
    string word;    // ata moloto arekta string declare korsi jekhane word gulo store korte cai
    while(ss>>word)
    {
        cout << word<< endl;

    }
}