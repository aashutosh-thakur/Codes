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
    for (int i = 0; keyword[i] != '\0'; i++) {
        if (keyword[i] >= 'a' && keyword[i] <= 'z' && !used[keyword[i] - 'a']) {
            matrix[idx / 5][idx % 5] = keyword[i];
            used[keyword[i] - 'a'] = true;
            idx++;
        }
        else if (keyword[i] >= 'A' && keyword[i] <= 'Z' && !used[keyword[i] - 'A']) {
            matrix[idx / 5][idx % 5] = keyword[i] + 32;
            used[keyword[i] - 'A'] = true;
            idx++;
        }
    }
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (!used[ch - 'a'] && idx < 25) {
            matrix[idx / 5][idx % 5] = ch;
            idx++;
        }
    }
    cout << "The 5x5 matrix is:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    // int len=strlen(plaintext);
    // for (int j = 0; j < len - 1; j += 2) {
    //     if (plaintext[j] == plaintext[j + 1]) {
    //         for (int k = len; k > j + 1; k--) {
    //             plaintext[k] = plaintext[k - 1];
    //         }
    //         plaintext[j + 1] = 'x';
    //         len++; 
    //     }
    // }
    // if (len % 2 != 0) {
    //     plaintext[len] = 'x';
    //     plaintext[len + 1] = '\0';
    // }
    // printf("Plain Text: %s",plaintext);
    return 0;
}
