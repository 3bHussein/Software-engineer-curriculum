
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


// declare with length
struct card detect[52];
detect[0].color=3;
detect[0].face=5;
detect[0].shape=6;

cout<<detect[0].color;




struct people
{
   int age;
   int size;
};

struct people p;
p.age=5;
p.size=45;


cout<<p.size;



// array


int array_1[]={45,4,5};
// cout<<array_1[1];
cout<<sizeof(array_1)<<endl;

for(int a : array_1){
   cout<<a<<endl;
   
}
   return 0;  



}