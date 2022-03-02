#include<iostream>
using namespace std;
int main()
{
    int *n=NULL;// declaring a pointer and initializing it with null
    int value;
    cout<<"Value of n before allocation"<<endl;
    cout<<" n = "<<n<<endl;
    cout<<"&n = "<<&n<<endl;
    cout<<"Enter the pointer value"<<endl;
    cin>>value;
    n=&value;// here the address of value gets copied to n
    cout<<"value ="<<value<<endl;
    cout<<"address of value = "<<&value<<endl;
    cout<<"*n = "<<*n<<endl;
    cout<<" n = "<<n<<endl;
    cout<<"&n = "<<&n<<endl;

    return 0;
}