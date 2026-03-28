#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char    *impostor_killed(int crewmate, int time, int cooldown)
{
    int calc;
    calc = crewmate * cooldown;
    if (calc > time)
        return("False");
    return("True");
}
int time_duration(int crewmate, int time, int cooldown)
{
    int calc;
    calc = crewmate * cooldown;
    calc = calc - time;
    if (calc < 0)
        calc = calc * -1;
    return(calc);
}
int main()
{
    char    *str;
    int res;
    int crewmate;
    scanf("%d", &crewmate);
    int time;
    scanf("%d", &time);
    int cooldown;
    scanf("%d", &cooldown);

    res = time_duration(crewmate, time, cooldown);
    str = impostor_killed(crewmate, time, cooldown);
    printf("%s\n%d\n", str, res);

    return 0;
}
