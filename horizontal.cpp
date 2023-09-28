#include<iostream>
using namespace std;
int mian(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){//rows
        for(int j=1; j<=n+1-i; j++){ //spaces
            cout<<"   ";
        }
        for(int j=1; j<=i; j++){//stars
            cout<<" * ";
        }
        cout<<endl;    
    }
}