#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char keyword[500];
    char plaintext[500];
    cout << "Enter the keyword: ";
    cin.getline(keyword, 500);
    cout << "Enter the Plain Text: ";
    cin.getline(plaintext, 500);
    char matrix[5][5];
    bool used[26] = {false};
    int idx = 0;
    for(int i=0;keyword[i]!='\0';i++) 
    {
        char ch = tolower(keyword[i]);
        if(ch>='a' && ch<='z' && !used[ch - 'a']) 
        {
            if(ch=='j')
            {
                ch='i';
            } 
            matrix[idx / 5][idx % 5] = ch;
            used[ch - 'a'] = true;
            idx++;
        }
    }
    for(char ch='a';ch<='z';ch++) 
    {
        if(!used[ch - 'a'] && idx<25) 
        {
            if(ch=='j') 
            {
                continue;
            } 
            matrix[idx/5][idx%5]=ch;
            used[ch - 'a'] = true;
            idx++;
        }
    }
    cout << "The 5x5 matrix is:\n";
    for(int i=0;i<5;i++) 
    {
        for(int j=0;j<5;j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    int len=strlen(plaintext);
    int newLen=0;
    char processedText[500];
    for(int i=0;i<len;i++) 
    {
        if(plaintext[i]== ' ') 
        {
            continue;
        }  
        if(plaintext[i]== 'j') 
        {
            plaintext[i]= 'i'; 
        }
        processedText[newLen++] = tolower(plaintext[i]);
    }
    for(int i=0;i<newLen-1;i++) {
        if(processedText[i] == processedText[i+1]) 
        {
            for (int j=newLen;j>i+1;j--) 
            {
                processedText[j] = processedText[j - 1]; 
            }
            processedText[i+1]='x'; 
            newLen++; 
        }
    }
    if (newLen%2!=0) 
    {
        processedText[newLen++]='x';
    }
    processedText[newLen]='\0';
    cout << "Processed Plaintext: " << processedText << endl;
    char encryptedText[500];
    int encryptedLen=0;
    for (int i=0;i<newLen;i+=2) 
    {
        char ch1=processedText[i];
        char ch2=processedText[i + 1];

        int row1, col1, row2, col2;
        for (row1=0;row1<5;row1++) 
        {
            for (col1=0;col1<5;col1++) 
            {
                if (matrix[row1][col1]==ch1) 
                {
                    break;
                }
            }
            if (col1<5)
            {
                break;
            }
        }
        for(row2=0;row2<5;row2++) 
        {
            for(col2=0;col2<5;col2++) 
            {
                if(matrix[row2][col2]==ch2) 
                {
                    break;
                }
            }
            if(col2<5)
            {
                break;
            }
        }
        if(row1==row2) {
            encryptedText[encryptedLen++] = matrix[row1][(col1 + 1) % 5];
            encryptedText[encryptedLen++] = matrix[row2][(col2 + 1) % 5];
        } else if (col1 == col2) {
            encryptedText[encryptedLen++] = matrix[(row1 + 1) % 5][col1];
            encryptedText[encryptedLen++] = matrix[(row2 + 1) % 5][col2];
        } else {
            encryptedText[encryptedLen++] = matrix[row1][col2];
            encryptedText[encryptedLen++] = matrix[row2][col1];
        }
    }
    encryptedText[encryptedLen] = '\0';
    cout << "Encrypted Text: " << encryptedText << endl;
    return 0;
}