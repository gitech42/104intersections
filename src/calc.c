/*
** EPITECH PROJECT, 2020
** 104intersection
** File description:
** calcul
*/

#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "struct.h"

void calcul_sphere(char **av)
{
    float a = 0;
    float b = 0;
    float c = 0;

    a = (pow(atof(av[5]), 2) + pow(atof(av[6]), 2) + pow(atof(av[7]), 2));
    b = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) + (2 * atof(av[4]) * atof(av[7]));
    c = (pow(atof(av[2]), 2) + pow(atof(av[3]), 2) + pow(atof(av[4]), 2) - pow(atof(av[8]), 2));
    delta_calc(a, b, c, av);
    if (a == 0)
        exit(84);
}

void calcul_cone(char **av)
{
    float a = 0;
    float b = 0;
    float c = 0;
    float rad;

    rad = (atof(av[8]) * M_PI) / 180;
    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2) - pow(atof(av[7]) * tan(rad), 2);
    b = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) - (2 * atof(av[4]) * atof(av[7]) * pow(tan(rad), 2));
    c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - (pow(atof(av[4]), 2) * pow(tan(rad), 2));
    delta_calc(a, b, c, av);
    if (a == 0)
        exit(84);
}

void calcul_cylindre(char **av)
{
    float a = 0;
    float b = 0;
    float c = 0;

    a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2);
    b = (2 * (atof(av[2]) * atof(av[5]))) + (2 * (atof(av[3]) * atof(av[6])));
    c = (pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - pow(atof(av[8]), 2));
    delta_calc(a, b, c, av);
    if (a == 0)
        exit(84);
}

void display(char **av)
{
    printf("Line passing through the point (%s, %s, %s) and parallel to the vector (%s, %s, %s)\n", av[2], av[3], av[4], av[5], av[6], av[7]);
}
