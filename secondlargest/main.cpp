# include <iostream>

using namespace std;

int main()
{

    int n1, n2, n3, t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n1 >> n2 >> n3;

        if (n1 < n2 && n3 < n1 || n1 < n3 && n2 < n1)
        3
            cout << n1 << endl;
        }
        else if (n2 < n1 && n2 > n3 || n2 > n1 || n2 < n3 )
        {
            cout << n2 << endl;
        }
        else if (n3 < n1 && n3 > n2 || n3 > n1 || n3 < n2)
        {
            cout << n3 << endl;
        }
    }

    return 0;
}
