#include <iostream>
using namespace std;

class Marks
{
private:
    int marks[5];

public:
    void input()
    {
        cout << "Enter marks of 5 subjects:" << endl;

        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }

    void display()
    {
        cout << "Marks are: ";

        // Range-based for loop with auto keyword
        for (auto mark : marks)
        {
            cout << mark << " ";
        }

        cout << endl;
    }

    // Friend function declaration
    friend int totalMarks(Marks m);
};


// Friend function definition
int totalMarks(Marks m)
{
    int total = 0;

    // Accessing private marks array
    for (auto mark : m.marks)
    {
        total = total + mark;
    }

    return total;
}


int main()
{
    Marks m;

    m.input();

    m.display();

    cout << "Total Marks = " << totalMarks(m) << endl;

    return 0;
}