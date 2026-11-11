#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER 3 NUMBERS: ";
    cin>>a>>b>>c;

    if((a+b) > c and (b+c)> a and (a+c)> b) cout<<"Valid Triangle";
    else cout<<"InValid Triangle";
}