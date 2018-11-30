#include <stdio.h> 
#include <iostream>
 
 using namespace std;
int main()
{
int arr[25],num,a=0,pos,size;
cout<<"Enter the size of array:"<<endl;
cin>> size;
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"Enter the number which u want to search:"<<endl;
cin>>num;
for(int i=0;i<size;i++)
{
if(arr[i]==num){
a=1;
pos=i+1;
break;
}
}
if(a==0){
 cout<<"OOPS!!!!!!   Number not found"<<endl;
}
else{
    cout<<"Position of required number is:"<<pos<<endl; 
}
















}