#include<iostream>
using namespace std;
int main()
{
    int *n=NULL;// declaring a pointer and initializing it with null or int *n=new int(25) here 25 is a value;
    int value;
    cout<<"Value of n before allocation :"<<endl;
    cout<<" n = "<<n<<endl;
    cout<<"&n = "<<&n<<endl;
    cout<<"Enter the pointer value :"<<endl;
    cin>>value;
    n=new int;// this is to allocate the memory for the variable ,data type can be built in or defined
    n=&value;//here the address gets copied to pointer variable // or *n=value here the value gets stored as the value of the pointer 
    cout<<"value ="<<value<<endl;
    cout<<"address of value = "<<&value<<endl;
    cout<<"*n = "<<*n<<endl;
    cout<<" n = "<<n<<endl;
    cout<<"&n = "<<&n<<endl;    
    delete n; //this will delete the array but needs a additional step i.e reinitializing 
    cout<<"After deleting :"<<endl;
    cout<<"*n = "<<*n<<endl;
    cout<<" n = "<<n<<endl;
    cout<<"&n = "<<&n<<endl; 
    n=NULL;
    cout<<"After reinitalizing pointer to null :"<<endl;
    cout<<" n = "<<n<<endl;
    //*n will show sementation as it doesnt hold anythng
    cout<<"&n = "<<&n<<endl; 
    return 0;
}