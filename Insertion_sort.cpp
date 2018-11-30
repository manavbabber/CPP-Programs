#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int arr[20],size,temp=0,swap;
        cout<<"Enter the size of array:"<<endl;
        cin>>size;
        cout<<"Enter the elements of array:"<<endl;

        for(int i=0;i<size;i++) 
    {
        cin>>arr[i];
    }

    for(int i=0; i<(size-1);i++)
    { 
        if(arr[i]>arr[i+1]){
        temp=arr[i+1];
        swap=i+1;
        while(swap!=1 && arr[swap-1]>temp){
        arr[i+1]=arr[i];
        arr[i]=temp;
        }
        }
    }
cout<<"Elements of array are:"<<endl;
for(int i=0;i<size;i++)
{cout<<arr[i]<<endl;
}
}
    