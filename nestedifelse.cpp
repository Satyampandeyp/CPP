#include<iostream>
using namespace std;
int main(){
    int age, ram, shyam, ajay;

    cout<<"Enter the age of ram ";
    cin>>ram;

    cout<<"Enter the age of shyam ";
    cin>>shyam;

    cout<<"Enter the age of ajay ";
    cin>>ajay;

    if(ram<shyam && ram<ajay){
        cout<<"Ram is youngest";
    }

    if(shyam<ram && shyam<ajay){
        cout<<"Shyam is youngest";
    }

    if(ajay<ram && ajay<shyam){
        cout<<"ajay is youngest";
    }    
}