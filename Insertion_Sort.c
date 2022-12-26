#include <stdio.h>
#define N 10
int main()
{
    int a[N] = {12, 31, 25, 8, 32, 17, 25, 69, 36, 86};
    printf("Before sorting array elements are - \n");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    int j, temp;
    for (int i = 1; i < N; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    printf("\nAfter sorting array elements are - \n");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    return 0;
}