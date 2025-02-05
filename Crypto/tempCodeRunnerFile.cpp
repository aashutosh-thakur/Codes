int len=strlen(plaintext);
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