//
// Created by mbmar on 06/10/2021.
//
#include <stdio.h>
#include "mesStructures.h"
#include "mesTableaux.h"

#define TAILLE_MAX 100

void exercice1(){

    NombreRationnel nR1 = {0, 1}, nR2 = {0, 1};
    NombreRationnel somme = {0, 1}, produit = {0, 1};
    int pgcd = 0;

    nR1 = fonctionDeSaisi();
    fonctionDAffichage(nR1);

    printf("On veut multiplier deux nombres rationnels. \n");
    fonctionDAffichage(fonctionDeMultiplication(nR1 = fonctionDeSaisi(), nR2 = fonctionDeSaisi()));

    printf("On veut additionner deux nombres rationnels. \n");
    fonctionDAffichage(fonctionDeSomme(nR1 = fonctionDeSaisi(), nR2 = fonctionDeSaisi()));

    printf("On veut maintenant connaitre le pgcd du numerateur et du denominateur. \n");

    nR1 = fonctionDeSaisi();
    pgcd = fonctionPGCD(nR1);
    printf("Le pgcd est : %d. \n", pgcd);
    fonctionDAffichage(asterix(nR1));//la fonction s'appelle Astérix car elle renvoit un irréductible

    return;
}


void exercice2(){

    int ohLeJoliTableau[TAILLE_MAX] = {0};
    int i = 0;
    int valeurUtile = 0;

    //on demande à l'utilisateur d'indiquer combien de valeurs il veut entrer dans le tableau
    //on demande obligatoirement que le tableau ne soit pas vide et qu'il ait moins de 101 éléments
    do{
        printf("Combien avez-vous de valeurs a saisir dans le tableau ? \n");
        scanf("%d", &valeurUtile);
    }while(valeurUtile > 100 || valeurUtile < 1);

    //l'utilisateur remplit le tableau
    for(i = 0; i < valeurUtile; i++) {
        printf("Entrez la %d eme valeur. \n", i + 1);
        scanf("%d", &ohLeJoliTableau[i]);
    }

    //appel de la fonction qui renvoit le plus grand des éléments saisis dans un tableau
    printf("La plus grande valeur du tableau est %d. \n", rechercheDuPlusGrandElement(valeurUtile, ohLeJoliTableau));

    return;
}


void exercice3(){

    int tableauDeuxDimensions[3][4] = {{0}};
    int tableauUneDimension[11] = {0};
    int i = 0, j = 0;

    //l'utilisateur rempli le tableau 2D
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("Entrez un entier de coordonnees : (%d,%d) \n", i, j);
            scanf("%d", &tableauDeuxDimensions[i][j]);
        }
    }

    //on convertit le tableau 2D en un tableau 1D
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            tableauUneDimension[i*4 + j] = tableauDeuxDimensions[i][j];
        }
    }
    //on affiche le tableau d'une dimension
    for(i = 0; i < 12; i++){
        printf("%d \t", tableauUneDimension[i]);
    }

    return;
}