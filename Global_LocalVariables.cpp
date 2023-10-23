#include<iostream>
using namespace std;

int x = 2; //Global Variable
void fun(){
    int x = 60;
    cout<<x<<endl;
    cout<<::x<<endl;
}
int main(){
    x = 4;
    {
        int x = 44;
        cout<<x<<endl;
    }
    int x = 20;//Local Variable
    cout<< x <<endl;
    cout<< ::x <<endl; //Accesing global Variable 
    fun();
    return 0; 
}