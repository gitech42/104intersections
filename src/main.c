/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "struct.h"

int main(int ac, char **av)
{
    check_error(ac, av);
    if (av[1][0] == '1') {
        printf("Sphere of radius %s\n", av[8]);
        display(av);
        calcul_sphere(av);
    }
    if (av[1][0] == '2') {
        printf("Cylinder of radius %s\n", av[8]);
        display(av);
        calcul_cylindre(av);
    }
    if (av[1][0] == '3') {
        printf("Cone with %s degree angle\n", av[8]);
        display(av);
        calcul_cone(av);
    }
}
