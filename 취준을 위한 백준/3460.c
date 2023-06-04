#include <stdio.h>

int main()
{
    int T, n;
    int bi[20];

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int j = 0;
        scanf("%d", &n);
        do {
            bi[j++] = n % 2;
            n /= 2;
        } while (n != 0);
        j--;
        for (int p = 0; p <= j; p++) {
            if (bi[p] == 1) {
                printf("%d ", p);
            }
        }
    }

    return 0;
}