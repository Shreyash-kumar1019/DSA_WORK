#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER 3 NUMBERS: ";
    cin>>a>>b>>c;

    // if(a <= b and a <= c) cout<<a<<" is least of them";
    // else if (b <= a and b <= c) cout<<b<<" is least of them";
    // else cout<<c<<" is least of them";

    // USING NESTED IF-ELSE

    if(a <= b){
       if(a <= c) cout<<a<<" is least of them";
       else // c <a<b 
       cout<<c<<" is least of them";
    }
    else{ // b < a
        if(b <= c) cout<<b<<" is least of them";
        else // c<b<a
        cout<<c<<" is least of them";

    }

}