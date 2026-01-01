#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int math;
    int english;
      student(string name,int roll,int math,int english)

      {
         this->name=name;
         this->roll=roll;
         this->math=math;
         this->english=english;
      }
      void new1()
      {
        cout<< "hellow" <<" "<<name<< " "<< math+english<<" "<<roll<<endl;
      }   //hellow er por nicer call  
      
      
      
};

int main()
{
   student sayed("sayed ali",45,98,80);
   sayed.new1();
   student saif("saif ali",61,98,81);
   saif.new1();
    
}