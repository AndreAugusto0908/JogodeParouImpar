#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, d_1, d_2;

    scanf("%d", &p);
    scanf("%d", &d_1);
    scanf("%d", &d_2);

    if (p == 0 && (d_1 + d_2) % 2 == 0) {
        printf("%d", p);
    } else if (p == 1 && (d_1 + d_2) % 2 == 0) {
        printf("%d", p);
    } else if (p == 1 && (d_1 + d_2) % 2 == 1) {
        p = 0;
        printf("%d", p);
    } else if (p == 0 && (d_1 + d_2) % 2 == 1) {
        p = 1;
        printf("%d", p);
    }

    return 0;
}
