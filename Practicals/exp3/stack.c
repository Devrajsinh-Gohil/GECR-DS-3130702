// Stack (Linear DS)

#include <stdio.h>
#include <stdlib.h>

void PUSH(int S[], int *TOP, int X, int N)
{
    if (*TOP > N - 1)
    {
        printf("Overflow\n");
        return;
    }
    *TOP += 1;
    S[*TOP] = X;
    return;
}

int POP(int S[], int *TOP)
{
    if (*TOP <= 0)
    {
        printf("Underflow\n");
        return 0;
    }
    int X;
    X = S[*TOP];
    *TOP -= 1;
    return X;
}

int PEEP(int S[], int *TOP, int I)
{
    if (*TOP - I + 1 < 1)
    {
        printf("Underflow\n");
        return 0;
    }
    int X;
    X = S[*TOP - I + 1];
    return X;
}

void CHANGE(int S[], int *TOP, int I, int X)
{
    if (*TOP - I + 1 < 0)
    {
        printf("Underflow\n");
        return;
    }
    S[*TOP - I + 1] = X;
    return;
}

int main()
{
    char stop;
    int N, option, I, TOP = 0, X = 0, key = 1;
    printf("Enter the size for Stack: ");
    scanf("%d", &N);
    int S[N];
    while (key)
    {
        printf("1. PUSH  2. POP  3. PEEP 4. CHANGE 5. EXIT\n");
        printf("-> ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &X);

            PUSH(S, &TOP, X, N);
            break;
        case 2:
            X = POP(S, &TOP);
            (X == 0)? :printf("%d is poped from the stack\n", X);
            scanf("%c", &stop);
            break;
        case 3:
            printf("Enter index from Top: ");
            scanf("%d", &I);
            X = PEEP(S, &TOP, I);
            (X == 0)? :printf("value found is %d\n", X);
            break;
        case 4:
            printf("Enter index from Top: ");
            scanf("%d", &I);
            printf("Enter New value: ");
            scanf("%d", &X);
            CHANGE(S, &TOP, I, X);
            break;
        case 5:
            key = 0;
            break;

        default:
            printf("Please enter a valid INPUT.\n");
            break;
        }
    }
    return 0;
}