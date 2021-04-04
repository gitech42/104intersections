/*
** EPITECH PROJECT, 2020
** 104intersection
** File description:
** 
*/

#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "struct.h"

void delta_calc(float a, float b, float c, char **av)
{
    float delta = 0;
    float solution1 = 0;
    float solution2 = 0;
    t_point p;

    if (a != 0) {
        delta = (pow(b, 2) - (4 * a * c));
        if (delta > 0) {
            solution1 = ((-b + sqrt(delta)) / (2 * a));
            solution2 = ((-b -sqrt(delta)) / (2 * a));
            p.x1 = (atof(av[2]) + (solution1 * atof(av[5])));
            p.y1 = (atof(av[3]) + (solution1 * atof(av[6])));
            p.z1 = (atof(av[4]) + (solution1 * atof(av[7])));
            p.x2 = (atof(av[2]) + (solution2 * atof(av[5])));
            p.y2 = (atof(av[3]) + (solution2 * atof(av[6])));
            p.z2 = (atof(av[4]) + (solution2 * atof(av[7])));
            printf("2 intersection points:\n");
            printf("(%.3f, %.3f, %.3f)\n", p.x1, p.y1, p.z1);
            printf("(%.3f, %.3f, %.3f)\n", p.x2, p.y2, p.z2);
        }
        if (delta < 0)
            printf("No intersection point.\n");
        if (delta == 0) {
            solution2 = (-b / (2 * a));
            p.x2 = (atof(av[2]) + (solution2 * atof(av[5])));
            p.y2 = (atof(av[3]) + (solution2 * atof(av[6])));
            p.z2 = (atof(av[4]) + (solution2 * atof(av[7])));
            printf("1 intersection point:\n");
            printf("(%.3f, %.3f, %.3f)\n", p.x2, p.y2, p.z2);
        }
    }
}


int check_error(int ac, char **av)
{
    int i = 2;

    if (ac != 9)
        exit(84);
    if (atof(av[8]) <= 0)
        exit(84);
    while (i < ac) {
        if (check_char(av[i]) == 1)
            exit(84);
        i++;
    }
    if (av[1][0] != '1' && av[1][0] != '2' && av[1][0] != '3')
        exit(84);
}

int check_char(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!(str[i] >= '0' && str[i] <= '9') && str[i] != '-'
            && str[i] != '.' && str[i] != ' ')
            return (1);
        i++;
    }
}
