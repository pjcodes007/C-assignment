#include<iostream>
using namespace std;
class Base
{
    int number;
    public:
    Base(int a)
    {
        number=a;
    }

    friend class checkPrime;
};

class checkPrime
{
    public:
    void Prime(const Base& base)
    {
        int a=base.number;
        int check=0;
        for(int i=2;i<=int(a/2);i++)
        {
            if(a%i==0)
            {
                check=1;
                break;
            }
        }
        if(check==1)
        {
            cout<<"Not Prime";
        }
        else{
            cout<<"Prime";
        }
    }
};


int main()
{
    Base b1(23);
    checkPrime P1;
    P1.Prime(b1);


    return 0;
}