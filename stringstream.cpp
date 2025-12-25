#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;// word word alada kore nibe
    ss>> word; // ss akta likata word vairable e store korbe .'I' print kotbe
    cout<<word<<endl;
    ss>> word;    //ai line ager i er porer word ta nibe 'I' ta remove hoiee jabe
    cout<<word<<endl; // 'am' print korbe
    ss>> word;
    cout<<word<<endl;
    ss>> word;
    cout<<word<<endl;
    ss>> word;
    cout<<word<<endl;
    ss>> word;
    cout<<word<<endl;
    return 0;

}