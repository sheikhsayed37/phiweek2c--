#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss>> word;
    reverse(word.begin(),word.end());// ATA MOLOTO FIRST WORD REVERSE KORAR JONNO
                            //ata korsi karon laste space asbe tai prothom word ta agei print kore dilam 
                      //erpr loop e ege space disi jeno laste e space na ashe
    cout <<word<<" ";
    while(ss >> word)
    {
        reverse(word.begin(),word.end());
        cout<< " "<< word;   // word er sesh hower por teme jabe space takbe na last e
    }
}