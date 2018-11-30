#include<iostream>
using namespace std;
int main()
{
	int arr1[75],arr2[75],arr3[75],size1,size2,size3,e1=0,e2=0,e3=0;
    cout<<"Enter the size of first arranged array:"<<endl;
    cin>>size1;
    cout<<"Enter the elements of array 1:"<<endl;
    for(int i=0;i<size1;i++)
    {
    cin>>arr1[i];
    }
    cout<<"Enter the size of second arranged array:"<<endl;
    cin>>size2;
    cout<<"Enter the elements of array 2:"<<endl;
    for(int i=0;i<size2;++i)    
    {
        cin>>arr2[i];
    }

    size3=(size1+size2);
    while(e1<size1 && e2<size2)
    {   
        if (arr1[e1]<arr2[e2])
    {
        arr3[e3]=arr1[e1];
        ++e3 ; ++e1;
    }
    else{
        arr3[e3]=arr2[e2];
        ++e3; ++e2;
    }
    }
    while(e1<size1){
        arr3[e3++]=arr1[e1++];
    }
    while(e2<size2){
        arr3[e3++]=arr2[e2++];
    }
cout<<"Merged Array is"<<endl;
    for(int i=0;i<size3;i++)
    {
        cout<<arr3[i]<<endl;
    }
}
