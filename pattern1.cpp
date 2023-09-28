#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of square: ";
    cin>>m;
    //row and column of square is same
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}