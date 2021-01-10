#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string studentID, studentName, studentHeight;


    public:


    void setId(string id)
    {
        studentID = id;
    }
    string getId()
    {
        return studentID;
    }


    void setStudentName(string n)
    {
        studentName = n;
    }
    string getStudentName()
    {
        return studentName;
    }


    void setStudentHeight(int h)
    {
        studentHeight = h;
    }
    string getStudentHeight()
    {
        return studentHeight;
    }
};




int main()
{
    string description[] = {"Name: ", "Height: ", "Id: "};


    Student st[3];



    int size = sizeof(st) / sizeof(st[0]);
    for (int i = 0; i < size; i++)
    {
        string n;

        for (int j = 0; j < 1; j++)
        {
            cout << description[i];
        }
        getline(cin, n);
        st[i].setStudentName(n);
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << description[i];
        }
        cout << st[i].getStudentName() << endl;;
    }
    return 0;
}
