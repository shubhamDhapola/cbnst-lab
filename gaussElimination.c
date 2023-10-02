// #include<stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int arr[n][n+1];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n+1;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//    for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<n+1;j++)
//     {
//         if(i>=1)
//     }
//    }
// }

#include <stdio.h>
#include <math.h>

#define N 3

int main()
{
    float a[N][N + 1], x[N], t, s;
    int i, j, k;

    printf("Enter the elements of the augmented matrix rowwise\n");

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N + 1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    for (j = 0; j < N - 1; j++)
    {
        for (i = j + 1; i < N; i++)
        {
            t = a[i][j] / a[j][j];
            for (k = 0; k < N + 1; k++)
            {
                a[i][k] -= a[j][k] * t;
            }
        }
    }

    printf("The upper triangular matrix is:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N + 1; j++)
        {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }

    for (i = N - 1; i >= 0; i--)
    {
        s = 0;
        for (j = i + 1; j < N; j++)
        {
            s += a[i][j] * x[j];
        }
        x[i] = (a[i][N] - s) / a[i][i];
    }

    printf("The solution is:\n");
    for (i = 0; i < N; i++)
    {
        printf("x[%d] = %7.4f\n", i + 1, x[i]);
    }

    return 0;
}
