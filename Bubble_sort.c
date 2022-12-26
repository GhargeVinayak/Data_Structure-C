#include <stdio.h>
#define N 10
int main()
{
    int a[N] = {-2, 45, 0, 11, -9, 25, 34, 67, 74, 69};
    printf("Before sorting array elements are - \n");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nAfter sorting array elements are - \n");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
}