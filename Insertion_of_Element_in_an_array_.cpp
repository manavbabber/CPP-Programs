#include <stdio.h> 
#include <iostream>
using namespace std;
int main()
{ 
int arr[100],pos,a,size,value;
cout<<"Enter no of elements in array"<<endl;
cin>>size;
cout<<"Enter elements of array"<<endl;
for(a=0; a<size; a++)
{
    cin>>arr[a];
}
cout<<"Enter the location where you wish to insert"<<endl;
cin>>pos;

cout<<"Enter the value to insert"<<endl;
cin>>value;

for(a=(size);a>=(pos-1);a--)
{
    arr[a+1] = arr[a];
}
arr[pos-1]=value;
cout<<"Resultant array is:"<<endl;
for(a=0; a<=size; a++)
{
    cout<<arr[a]<<endl;
} 
}