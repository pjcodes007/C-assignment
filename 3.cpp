#include<iostream>
using namespace std;
class SumofArray{
    public:
    int sum=0;
    SumofArray(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]>=0)
            {
                sum=sum+arr[i];
            }
        }
        cout<<"Parameterised constructor";
    }
    SumofArray(SumofArray &obj)
    {
        sum=obj.sum;
        cout<<"Copy Constructor"<<endl;
    }
    void dispsum()
    {
        cout<<sum<<endl;
    }
};
int main()
{
    int arr[]={1,2,-1,1,4,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    SumofArray s1(arr,size);
    SumofArray s2(s1);
    s2.dispsum();
}
