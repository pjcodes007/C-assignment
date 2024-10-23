#include<iostream>
using namespace std;
class Sum
{
    public:
    int n=5;
    Sum(){
        int sum=n*(n+1)/2;
        cout<<sum;
    }
};
int main()
{
    Sum s1;
}