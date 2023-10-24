#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    int id;
    int age;
    bool present; 
    string name;
    int nos;

    void study(){
        cout<<"Studying"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    void bunk(){
        cout<<"Bunking"<<endl;
    }
};

int main(){
    cout<<sizeof(Student)<<endl;//For Empty class size is 1.
    Student s1;
    Student s2;
}