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
    char line1[201] = "";
    scanf("%[^\n]", line1); fgetc(stdin);
    char line2[201] = "";
    scanf("%[^\n]", line2);

    int count = 0;

    char *string = line1;
    char *string2 = line2;
    int i = 0;
    int len = strlen(string2);
    while (string[i]){
        if (string[i] != string2[len - i - 1])
            count++;
        i++;
    }

    printf("%d", count);

    return 0;
}
