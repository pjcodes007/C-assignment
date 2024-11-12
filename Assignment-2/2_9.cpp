#include<iostream>
using namespace std;
class Numbers
{
    int a;
    public:
    Numbers(int a)
    {
        this->a=a;
    }
    Numbers operator+(const Numbers& obj2)
    {
        return(a+obj2.a);
    }
    Numbers operator-(const Numbers& obj2)
    {
        return(a-obj2.a);
    }
    friend Numbers operator+(const Numbers& obj1,const Numbers& obj2);
    friend Numbers operator-(const Numbers& obj1,const Numbers& obj2);

    void getvalue()
    {
        cout<<a;
    }
};


Numbers operator+(const Numbers& obj1,const Numbers& obj2)
{
    return(obj1.a+obj2.a);
}
Numbers operator-(const Numbers& obj1,const Numbers& obj2)
{
    return(obj1.a-obj2.a);
}



int main()
{
    Numbers n1(6);
    Numbers n2(10);
    Numbers sum=n1+n2;
    Numbers sum2=operator+(n1,n2);
    cout<<"ADDITION"<<endl;
    cout<<"using friend function"<<endl;
    sum.getvalue();
    cout<<endl;
    cout<<"using membership function"<<endl;
    sum2.getvalue();
    cout<<endl;
    cout<<endl;
    cout<<"SUBTRACTION"<<endl;
    cout<<"using member function"<<endl;
    Numbers diff=n2-n1;
    diff.getvalue();
    cout<<endl;
    cout<<"using friend function"<<endl;
    Numbers diff2=operator-(n2,n1);
    diff2.getvalue();



}