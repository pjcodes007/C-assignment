#include<iostream>
using namespace std;

template<typename X,typename Y>
auto getmax(X a, Y b)
{
    return(a>b) ? a:b;
}

int main(){
    cout<<getmax(10,20)<<endl;
    cout<<getmax(10.5,20)<<endl;
    cout<<getmax(10.2,10.5)<<endl;
    cout<<getmax(10,20.6)<<endl;
}
