#include<iostream>
#include<string>
using namespace std;
template<typename T,typename U>
struct Student
{
    U name;
    T age;
    U course;
    U Department;

    void Displayinfo() const
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"course : "<<course<<endl;
        cout<<"Department : "<<Department<<endl;
    }
};

int main()
{
    Student<int,string>s1{"Praanjal",18,"Btech","Technology"};
    s1.Displayinfo();
}