#include<iostream>
using namespace std;
int main(){
    int l , b;
    int a = l*b;
    int p = 2*(l+b);

    cout<<"Enter length: ";
    cin>>l;

    cout<<"Enter breadth: ";
    cin>>b;

    if(a>p){
        cout<<"Area is greater ";
    }

    else {
        cout<<"Perimeter is greater ";
    }

    
}