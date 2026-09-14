#include <stdio.h>
#include <string.h>
int main()
{
    char s[100], p[100];
    int i, j, found = -1;

    scanf("%s %s", s, p);

    for(i = 0; i <= strlen(s) - strlen(p); i++)
    {
        for(j = 0; j < strlen(p); j++)
            if(s[i+j] != p[j])
                break;

        if(j == strlen(p))
        {
            found = i;
            break;
        }
    }
    if(found == -1)
        printf("Pattern not found");
    else
        printf("Index: %d", found);

    return 0;
}
