#include<iostream>

using namespace std;
int main(){
   int i;
   int arr[100];
   
   cout<<"Enter any 10 numbers: \n";
   for(i=0; i<10; i++)
      
   cout<<"\nEven Numbers are:\n";
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         cout<<arr[i]<<" \n  ";
   }
   cout<<endl;
   
}
