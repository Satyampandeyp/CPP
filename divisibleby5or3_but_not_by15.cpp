#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    if((n%5==0 or n%3==0) && (n%15 !=0)){
      cout<<"This no. is according to our need";
    }

    else{
        cout<<"This no. is not according to our need";
    }
}