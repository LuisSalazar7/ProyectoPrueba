//
//  main.c
//  [2018-01-PI][GSLA]_T08
//
//  Created by PsyteK on 20/03/18.
//  Copyright © 2018 Luis Angel Garcia Salazar. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int conjunto [5] = {-1, 10, 5, 17, 7};
    int ax, i, j;
    
    printf("Numeros desordenados: \n %d %d %d %d %d", 10, -1, 5, 17, 7);
    
    printf("\n\n");
    
    for (i = 0; i < 5 ; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (conjunto [j] > conjunto [j + 1])
            {
                ax = conjunto [j];
                conjunto [j] = conjunto [j + 1];
                conjunto [j + 1] = ax;
            }
        }
    }
    
    printf("Numeros ordenados de menor a mayor\n");
    for (i = 0; i <= 4; i++)
        {
            printf(" %i ", conjunto [i]);
        }
    printf("\n\n");
    
    return 0;
}
