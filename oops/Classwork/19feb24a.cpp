#include<iostream>
using namespace std;
enum Gender{Male, Female};
int main()
{
     Gender gender=Male;
     switch(gender)
     {
        case Male:{
        cout<<"Gender is male";
        break;
        }
        case Female:
        {
            cout<<"Gender is female";
            break;
        }
        default:
        cout<<" Value can be Male or Female";
     }
}
