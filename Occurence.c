#include <stdio.h>
int first(int a[], int n, int x)
{
    int i = 0, j = n - 1, ans = -1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            j = mid - 1;
        }
        else if (a[mid] < x)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return ans;
}
int last(int a[], int n, int x)
{
    int i = 0, j = n - 1, ans = -1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            i = mid + 1;
        }
        else if (a[mid] < x)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return ans;
}
int main()
{
    int a[100], n, x, i;
    int f, l;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &x);

    f = first(a, n, x);
    l = last(a, n, x);

    if (f == -1)
        printf("Not found");
    else
    {
        printf("First position: %d\n", f + 1);
        printf("Last position: %d\n", l + 1);
        printf("Total count: %d", l - f + 1);
    }

    return 0;
}
