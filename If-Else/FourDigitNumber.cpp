#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a Four Digit Number: ";
   cin>>n;

   if(n >= 1000 and n <= 9999) cout<<"Hence it is 4-digit number";
   else cout<<"Not a 4-digit number";
}