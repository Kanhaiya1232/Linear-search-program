//Program linear search and using seil/floor
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int counter=0;
    double m=4.1;
    int m1;
    int arr[]={54,32,22,23,102,98,76,56,66};
    int size=sizeof(arr)/sizeof(int);
    int key;
    m1=ceil(m);
    cout<<m1;
    cin>>key;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            cout<<"Your position is"<<"  "<<i+1;
            counter=1;
            break;
        }
    }
    if(counter==0)
    {
        cout<<"Data not found";
    }
    return 0;
}