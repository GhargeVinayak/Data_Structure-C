#include <stdio.h>
#define N 10

void main()
{
    int a[N], low = 0, high = N, mid, key;
    printf("Enter the numbers :\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Data to be searched : ");
    scanf("%d", &key);
    for (int i = 0; i < N; i++)
    {
        mid = (high + low) / 2;
        if (key == a[mid])
        {
            printf("%d found at location %d", key, mid + 1);
            break;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (low > high)
    {
        printf("%d not found \n", key);
    }
}