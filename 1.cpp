#include<iostream>
using namespace std;
class Sum
{
    private:
    int n=5;
    Sum(){
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        cout<<sum;
    }
};
int main()
{
    Sum s1;
}