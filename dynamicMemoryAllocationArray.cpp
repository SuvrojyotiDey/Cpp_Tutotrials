#include<iostream>
using namespace std;
int main()
{
    int *n=NULL;
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    n=new int[size];
    cout<<"Enter "<<size<<" elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>n[i];// here we dont use *n[i] because n here refers to addresses and *n[i] would mean *(*n+i) where * cant be traverssed whereas address can  }
    }
    cout<<"Start address of array is "<<n<<endl;
    cout<<"End   address of array is "<<n+(size-1)<<endl;
    cout<<"The elements of the array are"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<*(n+i)<<endl;//*(n+i) is same as n[i];
    }
    return 0;
}