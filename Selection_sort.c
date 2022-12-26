#include <stdio.h>
#define N 10
int main()
{
    int a[N] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, temp;
    printf("Before sorting array elements are - \n");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting array elements are - \n");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    return 0;
}