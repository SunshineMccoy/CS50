#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float c;
    do {
        printf("O hai! How much change is owed?\n");
        c = get_float();
    } while (c < 0);
    c = c * 100;
    int x = round(c);
    int i = 0;
    while (x >= 25) {
        x = x - 25;
        i++;
    }
    while (x >= 10) {
        x = x - 10;
        i++;
    }
    while (x >= 5) {
        x = x - 5;
        i++;
    }
    while (x >= 1) {
        x = x -1;
        i++;
    }
    printf("%i\n", i);
}
