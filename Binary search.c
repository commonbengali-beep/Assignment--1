#include <stdio.h>
int main()
{
    int arr[5], i, target;
    int low = 0, high = 4, mid;
    printf("Enter 5 sorted numbers: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Enter target: ");
    scanf("%d", &target);
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == target)
        {
            printf("Target found at position %d", mid + 1);
            return 0;
        }
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Target not found");
    return 0;
}
