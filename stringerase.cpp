#include <bits/stdc++.h>
using namespace std;
int main()
{
string s="sheikh mohammed sayed ali";
s.erase(6);   // 6 no index theke porjonto string ta erase korbe
cout << s<< endl;

string s2="sheikh mohammed saif ali";
s2.erase(16,4);    // 16 no index theke 4 character erase korbe
cout <<s2<< endl;

string s3="sheikh mohammed aiman ali";
s3.replace(16,5,"sayed");  // 16 ghore gia theme 5 character erase kore sayed diye replace korbe
cout << s3<< endl;

string s4="sheikh mohammed ismam ali";
s4.replace(6,0,"sayed");  // 6 no index theke kono character erase na kore sayed add korbe
cout << s4<< endl;

string s5="sheikh mohammed istiak ali";
s5.insert(6,"sayed");// 6 no index theke sayed add korbe ata disnshese s4 e j kaj ta koreci tai atate
                        // hoise 
cout << s5<< endl;




}