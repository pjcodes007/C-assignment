#include<iostream>
using namespace std;
class Student
{
    public:
    inline int Sum(int a,int b)
    {
        return a+b;
    }
};
int main()
{
    Student s1;
    cout<<s1.Sum(5,6);
    return 0;
}