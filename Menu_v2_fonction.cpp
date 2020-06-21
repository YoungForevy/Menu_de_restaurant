/* Programme: Menu_v2_fonction.cpp
              menu_appel.h
              menu_fonction.cpp
    Auteur: JAOMISY Kellifano
    Version/Date: v2.2020
*/

#include <stdio.h> //utile et indispensable, on peut reussir à compiler le programme qui affiche bonjour seulement avec cette biblio
#include <stdlib.h>//utile mais pas indispensable
#include <math.h>
#include "menu_appel.h"


int main()
{
    int fin = 1, choix= 0;
 
    menu(choix);
    printf("\nEst-ce que c'est tout?\nOui=1 Non=0\nAlors:");
    scanf("%d",&fin);
    while ( fin != 1)
    {
        menu(choix);
        printf("\nEst-ce que c'est tout?\nOui=1 Non=0\nAlors:");
        scanf("%d",&fin);
    }
printf("\nBonne appetit :)");
return 0;
}
