
class MU_person{
private: long id;
	string name;
protected:

public:
	MU_person(long=112 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n){
   	  // Set up all MU_Person values
         cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  
    
}
