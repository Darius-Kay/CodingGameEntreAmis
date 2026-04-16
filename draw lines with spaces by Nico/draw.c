#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int line;
    scanf("%d", &line);
    int space;
    scanf("%d", &space); fgetc(stdin);
    char c[2] = "";
    scanf("%[^\n]", c);

    int i = 0;
    int j = 0;
    while (i < line)
    {

        printf("%*c", space + 1, c[0]);
        while (j < i)
        {
            printf("%c", c[0]);
            j++;
        }
        space++;
        j = 0;
        i++;
        printf("\n");
    }

    return 0;
}
