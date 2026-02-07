#include <bits/stdc++.h>
using namespace std;
class student 
{
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(student a,student b)
{

    return a.marks<b.marks;   // akkto shohoje lekha jay eivabe asecnding marks er jonno+pora 
                              // information soho mark er opor ascending hoiee asshe
}

int main()
{
    int n;
    cin>> n;
    student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }

     sort(a,a+n,cmp);  // acending order bt akto kotin kaj kora lagse opore fun k call korte hoise

        for(int i=0;i<n;i++)
    {
      cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

}
