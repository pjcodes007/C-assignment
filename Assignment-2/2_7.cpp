#include<iostream>
using namespace std;
class Sum
{
public:
    virtual int sum(int a,int b,int c)
    {
        return a+b+c+10;
    }
};

class Derived :: public Sum
{
public:
int sum(int a,int b,int c) override
{
    return a+b+c;
}
}
int main()
{

}