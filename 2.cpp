#include<iostream>
using namespace std;
class Swap
{
    public:
    Swap()
    {
        cout<<"Default";
    }
    Swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
        cout<<"a="<<*a<<endl;
        cout<<"b="<<*b;
    }
};
int main()
{
    int a=5;
    int b=6;
    int *pa=&a;
    int *pb=&b;
    Swap s1(pa,pb);
    Swap s2;
}