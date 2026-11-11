#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a Four Digit Number: ";
   cin>>n;

   if(n >= 100){
       if(n <= 999) cout<<"Hence it is 3-digit number";
       else cout<<"Not a 3-digit number";
   }
   else cout<<"Not a 3-digit number";
}