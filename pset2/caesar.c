#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (int argc, string argv[]) {
    
    if (argc != 2) {
        printf("ERROR\n");
        return 1;
    }
    
    printf("plaintext: ");
    string s = get_string();
    printf("ciphertext: ");

    
    int k = atoi(argv[1]);
    int o = strlen(s);
    for (int i = 0; i < o; i++) {
        s[i] = s[i] + k % 26;
        if (s[i] > 122) { 
            s[i] = s[i] - 26;
        }
        else if (s[i] > 90 && s[i] < 97) {
            s[i] = s[i] - 26;
        }
        else if (s[i] < 0) {
            s[i] = s[i] - 26;
        }
        else if (isalpha(s[i]) == 0) {
            s[i] = s[i] - k;
        }
    }
    printf("%s\n", s);
    return 0;
}
