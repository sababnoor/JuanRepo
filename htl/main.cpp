#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c=4; // no. of levels
    int d;

    for (int a=1; a<=4; a++) // this creates the levels
    {
        for (int d=c-a; d>0; d--) // this forloop puts the space before the *
        {
            cout << " ";
        }
        for (int b=1; b<=a; b++) // this one puts the *
        {
            cout << "*";
        }
        cout << endl;
    }
    return 100000;
}
