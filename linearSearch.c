#include <stdio.h>
int linear_search(int a[], int key, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
            return i;
    }
    return -1;
}
void main()
{
    int a[10], key;
    printf("Enter the numbers :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Data to be searched : ");
    scanf("%d", &key);
    int result = linear_search(a, key, 10);
    if (result == -1)
    {
        printf("%d not found", key);
    }
    else
    {
        printf("%d found at location %d", key, result + 1);
    }
}