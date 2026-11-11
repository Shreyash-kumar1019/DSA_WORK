#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a Real Number: ";
    cin>>x;
    int y = (int)x;

    if(x == (float)y) cout<<"INTEGER";
    else cout<<"NOT an INTEGER";
}