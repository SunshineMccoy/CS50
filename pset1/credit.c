#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 

{
    long long l = get_long_long();
    int a = l % 10;
    l = l / 10;
    int b = l % 10;
    l = l / 10;
    int c = l % 10;
    l = l / 10;
    int d = l % 10;
    l = l / 10;
    int e = l % 10;
    l = l / 10;
    int f = l % 10;
    l = l / 10;
    int g = l % 10;
    l = l / 10;
    int h = l % 10;
    l = l / 10;
    int i = l % 10;
    l = l / 10;
    int j = l % 10;
    l = l / 10;
    int k = l % 10;
    l = l / 10;
    int m = l % 10;
    l = l / 10;
    int n = l % 10;
    l = l / 10;
    int o = l % 10;
    l = l / 10;
    int p = l % 10;
    l = l / 10;
    int q = l % 10;
    int b2 = b * 2;
    int d2 = d * 2;
    int f2 = f * 2;
    int h2 = h * 2;
    int j2 = j * 2;
    int m2 = m * 2;
    int o2 = o * 2;
    int q2 = q * 2;
    int l2 = a + b2 + c + d2 + e + f2 + g + h2 + i + j2 + k + m2 + n + o2 + p + q2;
    printf("%i\n", l2);
    int z = l2 % 10;
    if (z == 0 && q == 4) {
        printf("VISA\n");
    }
    printf("%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i\n", a, b, c, d, e, f, g, h, i, j, k, m, n, o, p, q);
}
