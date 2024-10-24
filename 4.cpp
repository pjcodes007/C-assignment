#include<iostream>
using namespace std;

class cons_overloading
{
    public:
    cons_overloading(int a,int b)
    {
        cout<<a+b<<endl;
    }
    cons_overloading(double a, double b)
    {
        cout<<a+b<<endl;
    }
    cons_overloading(char a,char b)
    {
        cout<<a<<b<<endl;
    }
};
int main()
{
    char a='a';
    char b='b';
    cons_overloading s1(a,b);
    cons_overloading s2(1,2);
    cons_overloading s3(1.5,2.4);
}