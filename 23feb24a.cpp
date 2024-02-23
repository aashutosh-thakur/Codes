// Sum of two integers using inline
#include <iostream>
using namespace std;
inline int sum(int a,int b)
{
    int c=a+b;
    return c;  
}
int main()
{
    cout<<"Sum is: "<<sum(2,3);
    return 0;
}