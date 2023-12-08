
// #include <stdio.h>
#include <iostream>

using namespace std;

// Structures
// example Rectangle
// how to defined Structures
struct Rectangle
{
     int length ;
    int breadth ;
    
};

struct card{
 int face ;
 int shape;
 int color;
};

int main()
{
// to declare  Struct
// struct Rectangle R;
// to declare and initialize 
struct Rectangle R ={.length=4,.breadth=6};

cout<<R.breadth;

int Total =R.breadth*R.length;
// corrupt data
R.breadth=5;
R.length=6;

cout<<Total<<endl;


// normal declare
struct card c;
//declare with initialize
struct card ca={.color=1,.face=2,.shape=3};
cout<<ca.color;
   return 0;
}
