/*
    Algorithm: SUM_VALUES

    -This algorithm calculates the SUM of the vector V containing N values

    1.  [Sum of values in the vector V]
        SUM  <- 0
        Repeat for I = 1,2,...,N
            SUM <- SUM + V[I]

    2.  [Finish]
        Exit
*/

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int V[N];
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        V[i] = tmp;
    }

    int SUM = 0;
    for (int I = 0; I < N; I++)
    {
        SUM = SUM + V[I];
    }
    
    printf("Sum = %d\n",SUM);

    return 0;
}