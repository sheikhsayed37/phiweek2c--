#include <bits/stdc++.h>
using namespace std;

    class student
    { 
        public:
        string name;
        int roll;
        int id;

    };

    int main()
   {
       int n;
       cin>> n;
        
       student a[n];

       for(int i=0;i<n;i++)
       {
        cin.ignore();         // input neyar somoy ignore maintain kore nite hbe
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].id;
        
       }
        for(int i=0;i<n;i++)
       {
         cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].id<<endl;
       }

    }
    
