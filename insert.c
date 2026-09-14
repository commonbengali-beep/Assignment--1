#include<stdio.h>
void insert(char str[], char add[], int pos)
{
    int i, n = 0, k = 0;
    while(str[n] != '\0')
        n++;
    while(add[k] != '\0')
    k++;
    for(i = n; i >= pos; i--)
        str[i + k] = str[i];
    for(i = 0; i < k; i++)
        str[pos + i] = add[i];
    printf("%s", str);
}
int main()
{
    char str[100], add[50];
    int pos;

    scanf("%s %s %d", str, add, &pos);

    insert(str, add, pos - 1);

    return 0;
}
