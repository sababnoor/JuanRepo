#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    int c = 1;

    cout << "Enter your numberr  =  ";
    cin >> a;
    cout << " ___Result_of___ " << a << " != " << a;


    for(int b = a; b >=1; b--)
    {
        cout << " * " << a;

        c = c * b;
    }
    cout << " = " << c;




    return 0;
}
