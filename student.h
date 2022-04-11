#include "MU_Person.h"


class student:private MU_person,public Thai_person{
private:
          double gpa; // id + name
public:
    student(long=111 ,double=2.5,string="Nattawut",int);
    ~student();
    void display(); // display_person
   
};

student::student(long i, double g,string s):MU_person(i,s){
//เปลี่ยน หัว constructor เป็นแบบนี้ id & name จะเ
          //id=i; //private ของ MUperson
          gpa=g;  
         cout<<"MU student constructor  "<<gpa<<endl;
          //name=s; //protected
  
}
student::~student(){
     cout<<"-------"<<endl;
     cout<<"student destructor "<<gpa<<endl; 
}
/*
student::student(long x,double g,string n):MU_person(x,n){
	gpa=g;
	cout<<"MU student constructor  "<<gpa<<endl;
}*/

void student::display(){
   display_person(); 
  
  //cout<<"id:"<<id<<endl;
  
 // cout<<"name:"<<name<<endl;
  cout<<"GPA:"<<gpa<<endl;
}