#include <stdio.h> 
#include <iostream>
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
 for(int j=0;j<((size-i)-1);j++)
{
    if(arr[j]>arr[j+1])
    {  temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
}
}
}
cout<<"Elements of array:"<<endl;
for(int i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}
}