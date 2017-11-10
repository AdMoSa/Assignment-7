#include<iostream>
   using namespace std;
   class box{
    public:
       double length;
       double breadth;
       double height;
    };
   
   int main()
  {
   box box1,box2;
   double volume=0;
   box1.height=5;
   box1.breadth=6;
   box1.length=7;
  
   box2.height=15;
   box2.breadth=16;
   box2.length=17;
  
   volume= box1.height * box1.breadth * box1.length;
   cout<<"\nvolume of box1="<<volume;
  
   volume= box2.height * box2.breadth * box2.length;
   cout<<"\nvolume of box2="<<volume;
   return 0;
   }
