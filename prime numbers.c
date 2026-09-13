#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int p[n + 1];

    for (i = 2; i <= n; i++)
        p[i] = 0;

    i = 2;

    while (i <= n)
    {
        if (p[i] == 0)
            printf("%d ", i);

        for (j = 1; i * j <= n; j++)
            p[i * j] = 1;

        i++;
    }

    return 0;
}
