#include <iostream>
using namespace std;

class A
{
public:
    A() 
    {
        cout <<"Construcotr A"<<endl;
    }
    void showA() {
        cout <<"Function A"<<endl;
    }
};

class B : public A 
{
public:
    B() 
    {
        cout <<"Constructor B"<<endl;
    }
    void showB() 
    {
        cout<<"Function B"<<endl;
    }
};

class C : public A {
public:
    C() 
    {
        cout<<"Constructor C"<<endl;
    }

    void showC() 
    {
        cout<<"Function C"<<endl;
    }
};

class D : public A {
public:
    D() 
    {
        cout<<"Constructor D"<<endl;
    }

    void showD() 
    {
        cout<<"Function D"<<endl;
    }
};

class E : public B {
public:
    E() 
    {
        cout<<"Constructor E"<<endl;
    }
    void showE() 
    {
        cout<<"Function E"<<endl;
    }
};

int main() {
    E obj1;
    cout<<endl;
    obj1.showA();
    cout<<endl;
    obj1.showB();
    return 0;
}
