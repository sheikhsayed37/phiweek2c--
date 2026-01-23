#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>> a[i].name>> a[i].roll>> a[i].marks;
    }

    int mn=INT_MAX;    // int max onk boro akta soinka jekane kicp akta raka ase
                    
    for(int i=0;i<n;i++)
    {
       mn=min(a[i].marks,mn);  // 3<max thle mn e 3 gia bosbe erpr 4>3 abr 3 gia
                            // mn e bosbe 

    }
    cout<< "lowest mark is "<< mn<<endl;

}