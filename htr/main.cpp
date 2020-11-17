#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c=4; // 4 levels


    for(int a=0; a<c; a++) // this forloop makes the levels
    {
        for(int b=0; b<=a; b++) // the forloop here makes the *, increases by 1 after every level
     {
        cout<<"*";
     }
        cout<<endl;
    }
    return 01111111;
}
