#include <stdio.h>

void deleteChars(char s[], int p, int n)
{
    int i, len = 0;

    while (s[len] != '\0')
        len++;

    for (i = p - 1; i <= len - n; i++)
        s[i] = s[i + n];

    printf("%s", s);
}

int main()
{
    char s[100];
    int p, n;

    scanf("%s %d %d", s, &p, &n);

    deleteChars(s, p, n);

    return 0;
}
