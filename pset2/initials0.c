#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    
    string s = get_string();
    printf("%c", s[0]);
    int n = strlen(s);
    for (int i = 0; i < n; i++ ) {
        if (s[i] == ' ') {
            printf("%c", s[i+1]);
        }
    }
    printf("\n");
    
}
