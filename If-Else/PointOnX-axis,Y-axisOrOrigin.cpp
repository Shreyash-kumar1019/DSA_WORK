#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the co-ordinates of the point";
    cin>>x>>y;

    if(x > 0 and y > 0) cout<<"It lies in the Ist Quadrant";
    else if(x < 0 and y > 0) cout<<"It lies in the II Quadrant";
    else if(x < 0 and y < 0) cout<<"It lies in the III Quadrant";
    else if(x > 0 and y < 0) cout<<"It lies in the IV Quadrant";
    else if( x == 0 and y == 0) cout<<"It lies at the Origin";
    else if(y==0) cout<<"It lies on X-axis";
    else cout<<"It lies on Y-axis";

}