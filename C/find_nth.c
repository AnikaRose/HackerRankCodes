
// Calculate the Nth term
#include <stdio.h>

int find_nth(int n, int a, int b, int c)
{
    if (n == 1)
        return a;

    if (n == 2)
        return b;

    if (n == 3)
        return c;

    int next = a + b + c;

    return find_nth(n - 1, b, c, next);
}

int main()
{
    int n;
    int a, b, c;

    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", find_nth(n, a, b, c));

    return 0;
}
