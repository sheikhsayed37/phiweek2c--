#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2;

    cin >> s;            // space er age porjonto input ney
    cin.ignore();        // newline remove kore
    getline(cin, s2);    // space shoho full line ney
    cout << s <<endl;
    cout << s2 << endl;

    return 0;
}
     // cin.getline(s2,100) use korle error show korbe karon
     // karon string librsry te getline function ache ja cin er sathe use kora jabe na mane cin.getline(s2,100)
     // aibabe likhe jabe na