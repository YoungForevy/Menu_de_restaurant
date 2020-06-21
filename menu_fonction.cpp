#include <stdio.h>
#include"menu_appel.h"

int menu (int choix)
{
    
    printf("=====MENU=====\n1:Sauce poulet\n2:La soupe\n3:Misao\n4:Boisson STAR\n5:Riz\n6:Pack Fastfood: Sandwich, Nuggets et Kebab\n==>Votre choix:");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1 /* constant-expression */:
        printf("Vous avez choisi le sauce poulet, cela inclut donc le riz avec.\n");/* code */
        break;
    case 2/* constant-expression */:
        printf("Vous avez choisi la soupe\nBonne appetit.");/* code */
        break;
    case 3/* constant-expression */:
        printf("Vous avez choisi le misao, la specialite de la maison ;)");/* code */
        break;
    case 4/* constant-expression */:
        printf("Vous preferez donc les boissons STAR...\n");/* code */
        printf("Si vous choisissez un autre choix du menu avec votre boisson on vous offrira un boisson gratuit en cadeau ;)\n");
        break;
    case 5:
        printf("Faut croire que vous avez une faim de loup\nJuste au cas ou vous l'auriez peut-etre pas vu, il a du sauce poulet aussi qui pourrait aller avec ;)\n");
        break;
    case 6 :
        printf("Vous avez choisi le pack Fastfood\n");
        break;
    default:
       printf("Vous avez entrer un mauvais numero.\n Vueillez reesayer:\n");
        break;
    }
return choix;
    }