/*
    Algorithm: MATRIX_MULTIPLICATION

    -This algorithm finds the multiplication of the vector A and B storing result in vector C. Here the vector A B and the vector C are NxN matrix.

    1.  [Multiply matrices A and B, storing result in matrix C]
        Repeat for I = 1,2,...,N
            Repeat for J = 1,2,...,N
                SUM <- 0
                Repeat for K = 1,2,...,N
                    SUM <- SUM + A[I,K] * B[K,J]
                C[I,J] <- SUM

    2.  [Finish]
        Exit
*/

// Code.

#include<stdio.h>

int main()
{
    int N; 
    printf("Size of matrix: ");
    scanf("%d", &N);
    int A[N][N], B[N][N], C[N][N];

    printf("Enter values for Matrix A:\n");
    for(int I = 0; I < N; I++)
    {
        for(int J = 0; J < N; J++)
        {
            int tmp;
            scanf("%d", &tmp);
            A[I][J] = tmp;
        }
    }

    printf("Enter values for Matrix B:\n");
    for(int I = 0; I < N; I++)
    {
        for(int J = 0; J < N; J++)
        {
            int tmp;
            scanf("%d", &tmp);
            B[I][J] = tmp;
        }
    }

    // Step 1.
    for(int I = 0; I < N; I++)
    {
        for(int J = 0; J < N; J++)
        {
            int SUM = 0;
            for(int K = 0; K < N; K++)
            {
                SUM = SUM + (A[I][J] * B[I][K]);
            }
            C[I][J] = SUM;
        }
    }

    printf("\nMultipliction: \n");
    for(int I = 0; I < N; I++)
    {
        for(int J = 0; J < N; J++)
        {
            printf("%d ", C[I][J]);
        }
        printf("\n");
    }

    // Step 2.
    return 0;
}