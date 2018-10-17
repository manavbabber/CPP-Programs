#include<iostream>                                //  ]
#include<stdlib.h>                                //  [
#include<fstream>                                 //  ]  Libraries Used
#include<algorithm>                               //  [
#include<string>                                  //  ]

using namespace std;                                 
char ch;
const int length=25;                   

void leftrotate(string &s, int d)                  // |
{                                                  // |
    reverse(s.begin(), s.begin()+d);               // |
    reverse(s.begin()+d, s.end());                 // |  To Rotate the text 
    reverse(s.begin(), s.end());                   // |
}                                                  // |
void rightrotate(string &s, int d)                 // |
{  leftrotate(s, s.length()-d);}                   // |




//class Employee start

class Employee
{

  public: char name[length];
  int serial;
 
 void getdata()                              //Getdata function of Employee class
{ getc(stdin);                               
  cout<<"Enter the name of employee:"<<endl;   
  fgets(name,25,stdin);                        
  cout<<"Enter your serial number:"<<endl;              
  cin>>serial;
}
 
 void putdata()                              //Putdata function of Employee class
{
  cout<<"Name:"<<name<<endl;
  cout<<"Serial Number:"<< serial<<endl;
}
};

//class Employee ends

// class Doctor start
class Doctor:public Employee
{
private:
  char pos[length],qual[length];
public:
 void getdata()
{
  Employee::getdata();                       //Getdata function of Doctor class
  getc(stdin);
  cout<<"Enter your position:"<<endl;
  fgets(pos,25,stdin);
  cout<<"Enter your Qualifications:"<<endl;
  fgets(qual,25,stdin);
}
 void putdata()                              //Putdata function of Doctor class
{
  ofstream Dmilk;
  Dmilk.open("Doctor.txt",ios::app);
  // Employee::putdata();
  // cout<<"Position is:"<<pos<<endl;
  // cout<<"Qualifications are:"<<qual<<endl;
  Dmilk
  <<"Name:"<<name
  <<endl<<"Serial number "<<serial
  <<endl<<"Position:"<<pos
  <<endl<<"Qualifications:"<<qual;
  Dmilk.close();
}
void put_to_terminal()
{
  ifstream Dsilk;
  Dsilk.open("Doctor.txt",ios::in);
  if(!Dsilk)
  {
cout<<"Sorry Cannot open file!!!!!!!"<<endl;      //Function to print file to terminal
  }
  while(Dsilk)
  {
    Dsilk.get(ch);
    cout<<ch;

  }
    Dsilk.close();
}

};
//class Doctor ends

// class Nurse start
class Nurses: public Employee
{
private:
  char posi[length] , quali[length] ;
public:
 void getdata()                              //Getdata function of Nurse class
{
  Employee::getdata();
   getc(stdin);
  cout<<"Enter your position:"<<endl;
  fgets(posi,25,stdin);
   getc(stdin);
  cout<<"Enter your Qualifications:"<<endl;
  fgets(quali,25,stdin);
}
 void putdata()                              //Putdata function of Nurse class
{
   ofstream Nmilk;
 Nmilk.open("Nurses.txt",ios::app);
  // Employee::putdata();
  // cout<<"Position is:"<<posi<<endl;
  // cout<<"Qualifications are:"<<quali<<endl;
  Nmilk
  <<"Name:"<<name
  <<endl<<"Serial number "<<serial
  <<endl<<"Position:"<<posi
  <<endl<<"Qualifications:"<<quali;
  Nmilk.close();
}

void put_to_terminal()
{
  ifstream Nsilk;
  Nsilk.open("Nurses.txt",ios::in);
  if(!Nsilk)
  {
cout<<"Sorry Cannot open file!!!!!!!"<<endl;   //Function to print file to terminal
  }
  while(Nsilk)
  { Nsilk.get(ch);
  cout<<ch;
 
  }
   Nsilk.close();
}
};

// class Nurse ends

//class Supported staff starts
class Supportedstaff:public Employee
{
private:
  char role[length];
  int ward;
public:
 void getdata()                              //Getdata function of Supportedstaff class
{
  Employee::getdata();
  getc(stdin);
  cout<<"Enter your Ward"<<endl;
  cin>>ward;
  getc(stdin);
  cout<<"Enter your role"<<endl;
  fgets(role,25,stdin);
}
 void putdata()                              //Putdata function of Supportedstaff class
{
 ofstream Smilk;
 Smilk.open("Supportedstaff.txt",ios::app);
  //  Employee::putdata();
  //  cout<<"Role:"<<role<<endl;
  Smilk
  <<"Name:"<<name
  <<endl<<"Serial number "<<serial
  <<endl<<"Ward:"<<ward
  <<endl<<"Role:"<<role;
  
Smilk.close();
}

void put_to_terminal()
{
  ifstream Ssilk;
  Ssilk.open("Staff.txt",ios::in);
  if(!Ssilk)
  {
cout<<"Sorry Cannot open file!!!!!!!"<<endl;     //Function to print file to terminal
  }
  while(Ssilk)
  {
    Ssilk.get(ch);
    cout<<ch;
  
  }
  Ssilk.close();
}

};

//Class Supportedstaff ends

//Main function starts

int main(){
    int choice,choice1,choice2, n;
  Doctor d1,d2;
  Nurses n1,n2;
  Supportedstaff s1,s2;
  
  
  string str2 = "doctor";                     //  |
    rightrotate(str2, 0);                     //  |
  string str1 = "Nurse";                      //  | 
    leftrotate(str1, 0);                      //  |Rotation of text 
  string str3 = "Staff";                      //  | 
    leftrotate(str3,0);                       //  | 
  string str4 = "Exit";                       //  |  
   rightrotate(str4, 0);                      //  |  
   
   // Menu to enter details..................

   while (choice!=4){   

cout<<str2<<"***********************"<<endl;                           
cout<<"      "<<"1 - Doctors details" << endl;                              
cout<<"      "<<"***********************"<<str2<<endl;                         
cout<<endl;                                                                    
cout<<str1<<"*******************************"<<endl;                           
cout<<"     "<<" 2 - Nurses details"<<endl;                                      
cout<<"     "<<"*******************************"<<str1<<endl;                         
cout<<endl;                                                                            
cout<<str3<<"**************************"<<endl;                                  
cout<<"     "<<" 3 - Staff member details "<<endl;                                  
cout<<"     "<<"**************************"<<str3<<endl;                              
cout<<str4<<"***************"<<endl;                                              
cout<<"     "<<" 4 - Exit."<<endl;                                                 
cout<<"    "<<"***************"<<str4;                                              
cout<<endl;

cout<< " To Enter the details Enter your choice from 1 to 4 and press return: ";                
cin >> choice; 

cout<<endl;

    switch(choice)                                                                  
    {
        case 1: 
        cout<<"Doctor1"<<endl;
        d1.getdata();
        cout<<"Doctor2"<<endl;
        d2.getdata();
        break;

        case 2:
        cout<<"Nurse 1"<<endl;
        n1.getdata();
        cout<<"Nurse 2"<<endl;
        n2.getdata();    
        break;

        case 3:
        cout<<"Supportedstaff member 1"<<endl;
        s1.getdata();
        cout<<"Supportedstaff member 2"<<endl;
        s2.getdata();
        break;
        case 4:
        cout<<"End of section 1."<<endl;
         break;
    } };
     //Menu 1 Ends here.............
             
     //Menu to read the details.............
      
    while(choice1!=4){

 cout<<str2<<"***********************"<<endl;
 cout<<"       "<<"1 - Doctors details" << endl;
 cout<<"      "<<"***********************"<<str2<<endl;
 cout<<endl;
 cout<<str1<<"*******************************"<<endl;
 cout<<"     "<<" 2 - Nurses details"<<endl;
 cout<<"     "<<"*******************************"<<str1<<endl;
 cout<<endl;
 cout<<str3<<"**************************"<<endl;                                  
 cout<<"     "<<" 3 - Staff member details "<<endl;                                  
 cout<<"     "<<"**************************"<<str3<<endl;  
 
 cout<<str4<<"***************"<<endl;
 cout<<"     "<<" 4 - Exit."<<endl;
 cout<<"    "<<"***************"<<str4;
     cout<<endl;

 cout<< " To read the details Enter your choice and press return: ";
 cin >> choice1;
     
cout<<endl;

     switch(choice1)
     {
         case 1:
         cout<<"Doctor1 details:"<<endl;
         d1.putdata();
         cout<<"Doctor2 details:"<<endl;
         d2.putdata();
         break;

         case 2:
         cout<<"Nurse 1 details:"<<endl;
         n1.putdata();
         cout<<"Nurse 2 details:"<<endl;
         n2.putdata();
         break;

         case 3:
         cout<<"Supportedstaff member 1 details:"<<endl;
         s1.putdata();
         cout<<"Supportedstaff member 2 details:"<<endl;
         s2.putdata();
        break;
         case 4: cout<<"End of section 2."<<endl;
                 break;
 }
 };      
    //Menu 2 Ends here

   //Menu to print details to the terminal

  while(choice2!=4){

 cout<<str2<<"***********************"<<endl;
 cout<<"       "<<"1 - Doctors details" << endl;
 cout<<"      "<<"***********************"<<str2<<endl;
 cout<<endl;
 cout<<str1<<"*******************************"<<endl;
 cout<<"     "<<" 2 - Nurses details"<<endl;
 cout<<"     "<<"*******************************"<<str1<<endl;
 cout<<endl;
 cout<<str3<<"**************************"<<endl;                                  
 cout<<"     "<<" 3 - Staff member details "<<endl;                                  
 cout<<"     "<<"**************************"<<str3<<endl;  
 
 cout<<str4<<"***************"<<endl;
 cout<<"     "<<" 4 - Exit."<<endl;
 cout<<"    "<<"***************"<<str4;
     cout<<endl;

 cout<< " To Print the details directly to terminal Enter your choice and press return: ";
 cin >> choice2;
     
cout<<endl;

     switch(choice2)
     {
         case 1:
         cout<<"Doctor1 details:"<<endl;
         d1.put_to_terminal();
         cout<<"Doctor2 details:"<<endl;
         d2.put_to_terminal();
         break;

         case 2:
         cout<<"Nurse 1 details:"<<endl;
         n1.put_to_terminal();
         cout<<"Nurse 2 details:"<<endl;
         n2.put_to_terminal();
         break;

         case 3:
         cout<<"Supportedstaff member 1 details:"<<endl;
         s1.put_to_terminal();
         cout<<"Supportedstaff member 2 details:"<<endl;
         s2.put_to_terminal();
         break;
        case 4: cout<<"End of section 3."<<endl;
                 break;
 }
 };
  //Menu 3 Ends here



  
 return 0;
 }







//null//important