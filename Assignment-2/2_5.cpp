#include<iostream>
#include<string>    
using namespace std;
class B;
class C;

class A
{
    string name;
    protected:
    string surname;
    public:
    A(string name,string surname)
    {
        this->name=name;
        this->surname=surname;
    }
    friend void Dost(const A& a1, const B& b1, const C& c1);
};

class B
{
    string name;
    protected:
    string surname;

    public:
    B(string name,string surname)
    {
        this->name=name;
        this->surname=surname;
    }
    friend void Dost(const A& a1, const B& b1, const C& c1);
};

class C
{
    string name;
    protected:
    string surname;

    public:
    C(string name,string surname)
    {
        this->name=name;
        this->surname=surname;
    }
    friend void Dost(const A& a1, const B& b1, const C& c1);
};


void Dost(const A& a1, const B& b1, const C& c1)
{
    cout<<a1.name<<" "<<a1.surname<<endl;
    cout<<b1.name<<" "<<b1.surname<<endl;
    cout<<c1.name<<" "<<c1.surname<<endl;
}
int main()
{
    A a1("Liam","Carter");
    B b1("Sophia","Bennet");
    C c1("Ethan","Sinclair");

    Dost(a1,b1,c1);
}