/*
    Algorithm: GREATEST

    -This algorithm finds the largest algebric element of the vector A which contains N elements and place the result in MAX. I is used as subscript of A.

    1.  [Is vector empty?]
        if N < 1
        then write('Empty Vector')
        Exit
    
    2.  [Initialize]
        MAX <- A[1]
        I <- 2

    3.  [Examine all the elements of the vector]
        Repeat step thru 5 while I <= not

    4.  [Change MAX if it is smaller then next element]
        If MAX < A[I]
            MAX <- A[I]

    5.  [Prepare to examine next element]
        I <- I + 1

    6.  [Finish]
        Exit
*/

// Code 

#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // Step 1.
    if (N < 1 )
    {
        printf("Empty Vector!");
        return 0;
    }

    int A[N];
    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        A[i] = tmp;
    }
    
    // Step 2.
    int I  = 0;
    int MAX = A[I];
    I = 1;

    // Step 3.
    while (I < N)
    {
        // Step 4.
        if (MAX < A[I])
        {
            MAX = A[I];
        }
        // Step 5
        I++;
    }

    printf("Max = %d\n", MAX);

    // Step 6.
    return 0;
}