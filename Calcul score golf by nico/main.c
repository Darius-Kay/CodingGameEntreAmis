#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()z
{
	int par[9999];
    int swing[9999];
    int result = 0;

    for (int i = 0; i < 18; i++) {
        int x;
        scanf("%d", &x);
        par[i] = x;
    }
    for (int i = 0; i < 18; i++) {
        int x;
        scanf("%d", &x);
        swing[i] = x;
    }
    int i = 0;
    while (par[i] || swing[i])
    {
        result += swing[i] - par[i];
        i++;
    }
    printf("%d", result);
    return 0;
}
