/*
    Algorithm: LINEAR_SEARCH

    -given a vector V containg N elements, this algorithm search the vector V for the given value of X. FOUND is a boolean variable. I and LOCATION are integer variables.

    1.  [Search for location of value X in the vector V]
        FOUND <- false
        I <- 1
        Repeat while I <= N and not FOUND
            If V[I] = X
                then FOUND <- true
                    LOCATION <- I
                    Exit
            Else
                I <- I + 1
        Write('Value not found')

    2.  [Finish]
        Exit
*/

// Code

#include <stdio.h>
#define true 1
#define false 0

int main()
{
    int N, X, LOCATION;
    int bool_FOUND = false;
    scanf("%d", &N);

    int V[N];
    for (int I = 0; I < N; I++)
    {
        int tmp;
        scanf("%d", &tmp);
        V[I] = tmp;
    }
    printf("Enter the number to find: ");
    scanf("%d", &X);
    
    // Step 1
    for (int I = 0; I < N && !bool_FOUND; I++)
    {
        if (V[I] == X)
        {
            bool_FOUND = true;
            LOCATION = I;
            printf("Value of %d found at location %d\n", X, I+1);
            return 0;
        }
    }
    printf("Value of %d not found\n", X);

    // Step 2.
    return 0;
}