#include <stdio.h>

int main()
{
    int N, K, i;
    scanf("%d %d", &N, &K);

    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
            K--;
        if (K == 0)
        {
            break;
        }
    }

    if (K > 0)
        printf("0");
    else
        printf("%d", i);

    return 0;
}