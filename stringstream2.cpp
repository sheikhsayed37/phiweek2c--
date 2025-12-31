#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    getline(cin,s); // full line input nibo
    stringstream ss(s); //ss word by word venge nibe

    string word;  // ata moloto arekta string declare korsi jekhane word gulo store korte cai

    while(ss>>word)   // ss e teke word variable e nibe
    {
        cout<<word<<endl;
    }
}