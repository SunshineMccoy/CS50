#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[]) {
    
    //is there a key?
    if (argc != 2) {
        printf("ERROR\n");
        return 1;
    }
    
    //is the key only letters?
    int b = strlen(argv[1]);
    for (int a = 0; a < b; a++) {
        if (isalpha(argv[1][a]) == 0) { 
            printf("ERROR\n");
            return 1;
        }
    }
    
    //making the key
    for (int c = 0; c < b; c++) {
        if (isupper(argv[1][c]) != 0) {
            argv[1][c] = argv[1][c] - 65;
        }
        if (islower(argv[1][c]) != 0) {
            argv[1][c] = argv[1][c] - 97;
        }
    } 


    //getting the plaintext
    printf("plaintext: ");
    string s = get_string();
    printf("ciphertext: ");



    
    //doing the cipher
    int o = strlen(s);
    int j = 0;
    for (int i = 0; i < o; i++) {
        
        if (isupper(s[i]) != 0) {
            
            int n = j % b;
            
            s[i] = s[i] + argv[1][n] % 26;
            if (isupper(s[i]) == 0) { 
                s[i] = s[i] - 26;
            }
         }
        else if (islower(s[i]) != 0) {
                    
            int n = j % b;
            
            s[i] = s[i] + argv[1][n] % 26;
            if (islower(s[i]) == 0) { 
                s[i] = s[i] - 26;
            }
             
         }
         else {
             j--;
         }
         j++;
    }
    printf("%s\n", s);
    return 0;
}
