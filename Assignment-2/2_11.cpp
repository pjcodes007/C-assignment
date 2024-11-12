#include<iostream>
#include<string>
using namespace std;
template<typename T, typename U>
class Student
{
    private:
    U name;
    T age;
    U course;
    U Department;

    public:
    Student(U name,T age, U course, U Department)
    {
        this->name=name;
        this->age=age;
        this->course=course;
        this->Department=Department;
    }

    void Displayinfo()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Course : "<<course<<endl;
        cout<<"Department : "<<Department<<endl;
    }
};
int main()
{
    Student<int,string> S1("Praanjal",18,"Btech","Technology");
    S1.Displayinfo();
}