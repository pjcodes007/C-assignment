#include<iostream>
using namespace std;

class overloading
{
    int a;
public:
    overloading(int val)
    {
        a=val;
    }

    overloading operator ++()
    {
        a+=5;
        return *this;
    }

    friend overloading operator++(const overloading &o1);

    overloading operator --()
    {
        a-=1;
        return *this;
    }
    friend overloading operator--(const overloading &o1);

    overloading operator-()
    {
        a=-1*a;
        return *this;
    }
    friend overloading operator-(const overloading &o1);

    void getvalue()
    {
        cout<<a;
    }
};

overloading operator++(const overloading &o1)
{
    overloading temp(o1.a+5);
    return temp;
}

overloading operator--(const overloading &o1)
{
    overloading temp(o1.a-1);
    return temp;
}

overloading operator -(const overloading &o1)
{
    overloading temp(-o1.a);
    return temp;
}


int main()
{
    overloading o1(5);
    ++o1;
    o1.getvalue();
    cout<<endl;
    --o1;
    o1.getvalue();
    cout<<endl;
    -o1;
    o1.getvalue();
    cout<<endl;

    ++(o1);
    o1.getvalue();
    cout<<endl;

    --(o1);
    o1.getvalue();
    cout<<endl;

    -(o1);
    o1.getvalue();
    cout<<endl;
}
