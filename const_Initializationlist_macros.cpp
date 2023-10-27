#include<iostream>
using namespace std;

int main(){
    // const int x = 5; //x is constant
    //intialisation can be done.
    //but we can't re-assign a value.
    // x = 10;
    // cout<<x<<endl;

    // 2. const with pointers
    // const int *a = new int(2); //CONST data, NON-CONST pointer
    int const *a = new int(2); //same as line no. 12
    cout<< *a <<endl;
    // *a = 20; //can't change the content of pointer 
    // cout<< *a << endl;
    int b = 20;
    a = &b; //pointer itself can be re-assigned because pointer is NON-CONST
    cout<< *a <<endl;

     
    return 0;
}