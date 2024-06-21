#include<iostream> 
using namespace std; 
class demo 
{ 
    public: 
        demo() 
        { 
            cout << "Constructor!" << endl; 
        } 
        ~demo() 
        { 
            cout << "Deconstructor!" << endl << endl; 
        } 
}; 
int main() 
{ 
    cout << endl; 
    demo d1; 
    cout << endl; 
    return 0; 
} 