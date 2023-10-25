#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
private:
    string gf;
    public:
    //By default they were private.
    int id;
    int age;
    bool present; 
    string name;
    int nos;

    //Default Constructor(ctor)
    Student(){
        cout<<"Student ctor called"<<endl;
    }

    //Parameterized Constructor
    Student(int _id,int _age,bool _present,string _name,int _nos,string _gfname){
        id = _id;
        age = _age;
        name = _name;
        present = _present;
        nos = _nos;
        gf = _gfname;
        cout<<"Student parameterized ctor called"<<endl;
        
    }
    Student(int _id,int _age,bool _present,string _name,int _nos){
        id = _id;
        age = _age;
        name = _name;
        present = _present;
        nos = _nos;
        // gf = _gfname;
        cout<<"Student parameterized ctor without gf called"<<endl;
        
    }

    void study(){
        cout<<"Studying"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    void bunk(){
        cout<<"Bunking"<<endl;
    }
private:
    void gfchatting(){
        cout<<"Chatting"<<endl;
    }
};

int main(){
    cout<<sizeof(Student)<<endl;//For Empty class size is 1.
    Student s1;
    //parameterized constructor
    Student s2(1,12,1,"Chota Bheem",1,"Chutki");
    cout<<s2.name<<endl;
    cout<<s2.id<<endl;

    Student s3(2,15,0,"lokesh",5);
    cout<<s3.name<<endl;

    //If you don't assign value to your data member it will give senseless value.
    cout<< s1.age <<endl;
    // s1.name = 'Shashi';
    // s1.age = 20;
    // s1.id = 1;
    // s1.nos = 5;
    // s1.present = 0;
    // Student s2;
    // s2.name = 'Raj';
    // s2.age = 20;
    // s2.id = 1;
    // s2.nos = 5;
    // s2.present = 0;
}