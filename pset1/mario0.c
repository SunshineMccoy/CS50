#include <stdio.h>
#include <cs50.h>

int main(void)

{
    printf("Height: ");
    int n = get_int();
    while (n < 0 || n > 23) {
        printf("Height: ");
        n = get_int();
    }
    for (int i = 0; i < n; i++) {
        int s = n - i - 1;
        int o = 1 + i;
        for (int x = 0; x < s; x++) {
            printf(" ");
        }
        for (int y = 0; y < o; y++) {
            printf("#");
        }
        printf("\n");
    }
}
