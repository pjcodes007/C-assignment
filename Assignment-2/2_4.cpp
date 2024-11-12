#include<iostream>
#include<string>
using namespace std;
class A
{
    string name;
    public:
    A(string name)
    {
        this->name=name;
    }
    friend class Dost;
};

class B
{
    string name;
    public:
    B(string name)
    {
        this->name=name;
    }
    friend class Dost;
};

class C
{
    string name;
    public:
    C(string name)
    {
        this->name=name;
    }
    friend class Dost;
};

class Dost
{
    public:
    void print(const A& a1)
    {
        cout<<a1.name<<endl;
    }
    void printB(const B& b1)
    {
        cout<<b1.name<<endl;
    }
    void printC(const C& c1)
    {
        cout<<c1.name<<endl;
    }
};
int main()
{
    A a1("Ram");
    B b1("Lakshman");
    C c1("Bharat");
    Dost dost1;
    dost1.print(a1);
    dost1.printB(b1);
    dost1.printC(c1);

    return 0;
}