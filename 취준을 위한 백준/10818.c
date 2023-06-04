#include <stdio.h>

int main()
{
    int N, min, max;

    scanf("%d", &N);

    int list[N - 1];

    scanf("%d", &list[0]);
    min = list[0];
    max = list[0];

    for (int i = 1; i < N; i++)
    {
        scanf(" %d", &list[i]);
        if (list[i] > max)
            max = list[i];
        if (list[i] < min)
            min = list[i];
    }

    printf("%d %d", min, max);

    return 0;
}