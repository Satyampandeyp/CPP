#include<iostream>
using namespace std;
int main(){
    int cp , sp;
    cout<<"Enter cp: ";
    cin>>cp;

    cout<<"Enter sp: ";
    cin>>sp;

    if(sp>cp){
        cout<<"Profit is "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Loss is "<<cp-sp;
    }
    else{
        cout<<"No profit no loss";
    }
}