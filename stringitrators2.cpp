#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str="Sheikh Mohammed Sayed Ali";
    
    cout << *str.begin()<<endl; // begin() function string er prothom character er address return kore

    cout << *str.end()<<endl;   // end() function string er last er porer address return kore mane ali er pore null character

    cout << *(str.end()-1)<<endl; // last character dekhate chaile end()-1 korte hobe
    return 0;
}