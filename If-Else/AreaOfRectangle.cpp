#include<iostream>
using namespace std;
int main(){
    int length;
    cout<<"Enter Length: ";
    cin>>length;
    int breadth;
    cout<<"Enter Breadth: ";
    cin>>breadth;
    int Area = (length * breadth);
    int Perimeter = 2 * (length + breadth);

    if(Area > Perimeter) cout<<"AREA OF RECTANGLE IS GREATER THAN ITS PERIMETER";
    else cout<<"AREA OF RECTANGLE IS LESSER THAN ITS PERIMETER";


}