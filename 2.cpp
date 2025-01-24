#include <iostream>
#include <string>
using namespace std;

char Grading(int Marks);

int main()
{
    int Course;
    char Grade[4];
    int Total = 0;
    int Avg = 0;
    int Marks;

    for (int i = 0; i < 4; i++)
    {
        cout << "select your course [1 for PF, 2 for OOP, 3 for DLD, 4 for ICT]: ";
        cin >> Course;
        // assuming that data entered is correct.

        cout << "enter your marks: ";
        cin >> Marks;

        Total += Marks;

        Grade[i] = Grading(Marks);

        cout << "Your grade for above selected course: " << Grade[i] << endl;
    }
    
    Avg = Total / 4;

    cout << "Your average marks for 4 courses: " << Avg;
}

char Grading(int Marks)
{

    if (Marks >= 90)
    {
        return 'A';
    }
    else if (Marks < 90 && Marks >= 80)
    {
        return 'B';
    }
    else if (Marks < 80 && Marks >= 70)
    {
        return 'C';
    }
    else if (Marks < 70 && Marks >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}