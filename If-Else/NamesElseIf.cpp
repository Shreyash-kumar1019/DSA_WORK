#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number: ";
    cin>>n;

//    if(n%5==0 and n%3==0) cout<<"Anuj";
//    else if(n%5==0) cout<<"Kartikey";
//    else if(n%3==0) cout<<"Sakshi";
//    else cout<<"Hitesh";

if(n%5!=0 and n%3!=0) cout<<"Hitesh";
if(n%5==0 and n%3!=0) cout<<"Kartikey";
if(n%5==0 and n%3==0) cout<<"Anuj";
if(n%3==0 and n%5!=0) cout<<"Sakshi";
}