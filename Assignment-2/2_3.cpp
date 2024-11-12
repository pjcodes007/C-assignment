#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int age;
    string department;
    string course;
    public:
    Student(string name,int age,string department,string course)
    {
        this->name=name;
        this->age=age;
        this->course=course;
        this->department=department;
    }

    friend void print_details(Student s1);
};

void print_details(Student s1)
{
    cout<<"Name : "<<s1.name<<endl;
    cout<<"Department : "<<s1.department<<endl;
    cout<<"Course : "<<s1.course<<endl;
    cout<<"Age : "<<s1.age<<endl;
}

int main()
{
    Student s1("Praanjal",18,"Technology","Btech");
    print_details(s1);
    return 0;
}