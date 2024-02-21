#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    // Attributes

     int id;
     int age;
     string name;
     int nos;

    //   ctor: Default ctor
    Student(){
        cout<<"Student default ctor called"<< endl;
    }

//  ctor parametrized ctor
 Student(int id, int age, string name, int nos){
        cout<<"Student parametrized ctor called"<< endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;

    }
     




    //  copy ctor

    Student(const Student &srcobj){
        cout<<"Student parametrized copy ctor called"<< endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;

    }
    //  Behaviour /Methods / Functions

    void study()
    {
        cout<< this->name <<"Studying" << endl;
    }

    void sleep()
    {
        cout <<this->name << " Sleeping"<< endl;
    
    }
    void bunk()
    {
        cout << this->name <<" Bunking" << endl;
    }




    //  dtor
    ~Student()
    {
        cout << "Student default dtor called "<<endl;
    }








};







int main(){

    // Student A(1,15,"Ranu",6); 
    // Student B(1,15,"Rauji",6);
    // Student C(1,15,"Rani",6);
    // Student D(1,15,"Ronaldo",6);
    // Student E(1,15,"Ritu",6);
    
// cout << A.name <<" "<<A.age<<endl;
    // A.bunk();
    // B.sleep();

    // copy ctor
    // Student C =A;
    // cout <<C.name<<" "<<A.name<< endl;

    // Student A;
    // A.id = 1;
    // A.age = 15;
    // A.name="Ranu";
    // A.nos = 6;

    // A.study();

    //  Student B;
    // B.id = 2;
    // B.age = 13;
    // B.name="Rahul";
    // B.nos = 23;

    // B.bunk();

    Student *A = new Student(1,14,"Babbar" ,7);
    cout << A->name <<endl;
    cout << A->age <<endl;
    A->study();
    delete A;
        return 0 ;

}