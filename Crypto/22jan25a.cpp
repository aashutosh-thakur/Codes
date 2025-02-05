#include<iostream>
using namespace std;
int main(){
    char keyword[500];
    char plaintext[500];
    cout<< "Enter the keyword: ";
    cin.getline(keyword,500);
    cout<<"Enter the Plain Text: ";
    cin.getline(plaintext,500);
    char matrix[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j]!=keyword[j])
            {
                matrix[i][j]=keyword[j];
            }
            for(char ch='a';ch<='z';ch++)
            {
                if(matrix[i][j]!=ch){
                    matrix[i][j]=ch;
                }
            }
            for(char cha='A';cha<='Z';cha++)
            {
                if(matrix[i][j]!=cha){
                    matrix[i][j]=cha;
                }
                }
            }
    }
    for(int k=0;k<5;k++)
    {
        for(int l=0;l<5;l++)
        {
            cout<<matrix[k][l]<<" ";
        }
        cout<<"\n";
    }
}