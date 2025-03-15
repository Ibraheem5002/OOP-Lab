#include <iostream>
using namespace std;

class Person
{
public:
    string Name;
    int Age;

    Person(string N, int A)
    {
        Name = N;
        Age = A;
    }

    void DisplayPerson()
    {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
    }
};

class Student : virtual public Person
{
public:
    int ID;
    string Grade;

    Student(string N, int A, int I, string G) : Person (N,A)
    {
        ID = I;
        Grade = G;
    }

    void DisplayStudent()
    {
        cout << "Student ID: " << ID << endl;
        cout << "Student Grade: " << Grade << endl;   
    }
};

class Teacher : virtual public Person
{
public:
    string Subject;
    string Room;

    Teacher(string N, int A, string S, string R) : Person(N,A)
    {
        Subject = S;
        Room = R;
    }

    void DisplayTeacher()
    {
        cout << "Teacher Subject: " << Subject << endl;
        cout << "Teacher Room: " << Room << endl;
    }
};

class GraduateStudent : public Student, public Teacher
{
public:
    GraduateStudent(string N, int A, int I, string G, string S, string R)
    : Person(N,A), Student(N,A,I,G), Teacher(N,A,S,R) {}

    void Display()
    {
        cout << "Graducate Student Stats:" << endl;
        DisplayPerson();
        DisplayStudent();
        DisplayTeacher();
    }
};

int main()
{
    GraduateStudent GS("Ibrahim", 20, 23, "Undergraduate", "OOP", "Lab-1");
    GS.Display();
}