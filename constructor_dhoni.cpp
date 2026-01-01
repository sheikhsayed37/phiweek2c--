#include <bits/stdc++.h>
using namespace std;

class footballer
{
    public:
     
        string  country;
        int  jersy;
        footballer(string country, int jersy)
        {
           this->country=country;
           this->jersy=jersy;

        }
         
    
};


int main()
{

      footballer *messi=new footballer("ARGENTINA",10);
      footballer *neymer=new footballer("BRAZIL",11);
      *messi=*neymer;
      delete neymer;
      cout << messi->country<< " "<< messi->jersy<< endl;


}