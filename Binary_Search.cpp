#include<iostream>
using namespace std;

int main()
{ int arr[30],n,search,first,last,middle;
 
 cout << "Enter the number of Elements in an array:"<<endl;
 cin>>n;
cout<<"Enter the elements of an array:"<<endl;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
first=0;
last=n;
middle=(first+last)/2;
cout<<"Enter the number u want to search:"<<endl;
cin>>search;
while(first<=last)
{
if(arr[middle]< search)
{
first = middle +1;
}
else if(arr[middle]==search)
{
cout<<"Position of"<<search<<"is:"<<middle+1<<endl;
break;
}
else{
last=middle-1;
}
middle=(first+last)/2;
}
if(first>last)
{
cout<<"OOPS!!!! Number not found"<<endl;
}
}
