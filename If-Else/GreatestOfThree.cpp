#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER 3 NUMBERS: ";
    cin>>a>>b>>c;

    // if(a>=b and a>=c) cout<<a<<" is greatest";
    // else if(b>=a and b>=c) cout<<b<<" is greatest";
    // else cout<<c<<" is largest";


    if(a >=b){
        if(a >=c) cout<<a<<" is greatest";
        else // c > a > b
        cout<<c<<" is largest";
    }
    else{// b > a
        if(b >= c) cout<<b<<" is greatest";
        else // c > b > a
        cout<<c<<" is largest";
    }
}