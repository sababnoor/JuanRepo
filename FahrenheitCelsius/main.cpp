#include <iostream>
#include <String>
using namespace std;

int celsius(double temperature)
{
    cout << "\n" << (temperature * 1.8) + 32 << endl;
}

int fahrenheit(double temperature)
{
    cout << "\n" << (temperature - 32) * 1.8 << endl;
}


int main()
{
    string option;
    double temperature;

    cout << "F-C or C-F -- " ;
    cin >> option;

    if (option == "F-C");
    {
        fahrenheit (temperature);
    }

    else if (option == "C-F")
    {
        celsius (temperature);
    }


    return 0;
}
