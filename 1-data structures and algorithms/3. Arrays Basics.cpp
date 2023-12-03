// #include <stdio.h>
#include <iostream>

using namespace std;

int main()
{


// fixed array
   int A[5];
   A[0] = 5;
   A[1] =54;
   A[2]= 54;

   // cout<<sizeof(A)<<endl;
   // cout<<A[0];

// dynamic array 
   // int B[];
   int B[]={34,5,6};
   // cout<<B[1]<<endl;
   // cout<<sizeof(B)<<endl;


// for loop 
   for (size_t i = 0; i < 6; i++)
   {
    
   //  cout<<B[i]<<endl;
   //  cout<<B[i]<<endl;
   }
   for (int z :B)
   {
    cout<<B[z]<<endl;

   }


   return 0;
}
