#include <stdio.h>
int lsearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}
int main()
{
    int arr[5], target;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Enter target: ");
    scanf("%d", &target);
    int pos = lsearch(arr, 5, target);
    if (pos != -1)
        printf("Target is at position %d", pos + 1);
    else
        printf("Target not found");
    return 0;
}
