//You are working in a data processing center, demonstrate a constructor where the input string will be taken by user and print number of vowels in it.
#include<iostream>
using namespace std;
class vowel{
    string s;
    int count=0;
    public:
        vowel(){
            cout<<"Enter the string: ";
            cin>>s;
            int count1=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    count1=count1+1;
                }
            }
            count=count1;
        }
        void display(){
            cout<<"Number of vowel letter: "<<count;
        }
};
int main()
{
    vowel v;
    v.display();
    return 0;
}