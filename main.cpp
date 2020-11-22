#include <iostream>
#include <string>
using namespace std;

// gpe
int m;
int g;
int h;
// pr
int a;
int f;
// po
int w;
int t;
// wd
int fo;
int d;
// de
int ma;
int v;
// ke
int ms;
int ve;

// gpe
double gpec(double m, double g, double h)
{
    return m*g*h;
}
// pr
double pr(double f, double a)
{
    return f/a;
}
// po
double po(double w, double t)
{
    return w/t;
}
// wd
double wd(double f, double d)
{
    return fo*d;
}
// de
double de(double m, double v)
{
    return m/v;
}
// ke
double ke(double ms, double ve)
{
    return ms*ve*ve/2;
}


int main()
{
    string op;

    cout << "You have the formulas for: pressure, power, workdone, gpe, density, ke" << endl;

    cout << "What calculator do you need? ";
    cin >> op;


    // gpe
    if(op == "gpe")
    {
        cout << "Input m: ";
        cin >> m;
        cout << "Input g: ";
        cin >> g;
        cout << "Input h: ";
        cin >> h;

        cout << "result: " << gpec(m, g, h) << endl;
    }

    // pr
    else if(op == "pressure")
    {
        cout << "Input Area: ";
        cin >> a;
        cout << "Input Force: ";
        cin >> f;



        cout << "result: " << pr(f, a) << endl;
    }

    // po
    else if(op == "power")
    {
        cout << "Input workdone: ";
        cin >> w;
        cout << "Input time: ";
        cin >> t;

        cout << "result: " << po(w, t) << endl;
    }

    // wd
    else if(op == "workdone")
    {
        cout << "Input Force: ";
        cin >> fo;
        cout << "Input Distance: ";
        cin >> d;

        cout << "result: " << wd(fo, d) << endl;
    }

    // de
    else if(op == "density")
    {
        cout << "Input Mass: ";
        cin >> m;
        cout << "Input Volume: ";
        cin >> v;

        cout << "result: " << de(m, v) << endl;
    }

    // ke
    else if(op == "ke")
    {
        cout << "Input mass: ";
        cin >> ms;
        cout << "Input Velocity: ";
        cin >> ve;

        cout << "result: " << ke(ms, ve) << endl;
    }

    return 0111;
}
