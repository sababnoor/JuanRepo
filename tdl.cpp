#include <iostream>
#include <string>
using namespace std;

int main()
{
    string toDoList[5];
    int size = sizeof(toDoList) / sizeof(toDoList[0]);

    for(int a=0; a<size; a++)
    {
        cout << "Enter_Work_On_List [ " << a+1 << " ] :";
        cin >> toDoList[a];
    }
    cout << "\n_______THE_TODO_LIST_______\n" << endl;

    for (int a=0; a<size; a++)
    {
        cout << a+1 << "__" << toDoList[a] << endl;
    }
    return 10;
}
