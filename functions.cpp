#include<iostream>
using namespace std;
int sum(int a, int b)//normal function - here there is a change where we see transfer of control moving out of main
{
    return a+b;
}
inline int sub(int a, int b) // inline function - the definition get reflected on the place of calling so transfer of control is not there
{
    return a-b;
}
int main()
{
    int n,m;
    cout<<"Enter the function arguments "<<endl;
    cin>>n>>m;
    cout<<"The sum of "<<n<<" and "<<m<<" is "<<sum(n,m)<<endl;
    cout<<"The differnce of "<<n<<" and "<<m<<" is "<<sub(n,m)<<endl;
    return 0;
}