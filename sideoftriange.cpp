#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;

    cout << "Enter side a: ";
    cin >> a;

    cout << "Enter side b: ";
    cin >> b;

    cout << "Enter side c: ";
    cin >> c;

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        cout << "these sides are the side of the triangle";
    }

    else
    {
        cout << "These sides are not the side of triangle";
    }
}