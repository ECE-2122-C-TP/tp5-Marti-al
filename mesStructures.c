//
// Created by mbmar on 04/10/2021.
//
#include <stdio.h>
#include "mesStructures.h"


//fonction qui affiche le numérateur et le dénominateur
//IN : la structure de type NombreRationnel
//rien
void fonctionDAffichage(NombreRationnel NR){
    printf("Le numerateur est : %d. \nLe denominateur est : %d. \n" , NR.numerateur, NR.denominateur);
    return;
}


//fonction qui permet de saisir le numérateur et le dénominateur d'un nombre rationnel
//IN : rien
//OUT : NR
NombreRationnel fonctionDeSaisi(){

    NombreRationnel nR;

    printf("Veuillez saisir le numerateur et le denominateur d'un nombre rationnel \n");
    scanf(" %d %d", &nR.numerateur, &nR.denominateur);

    return nR;
}


//fonction de multiplication de deux rationnels
//IN : deux nombres rationnels
//OUT : le produit des deux nombres rationnels
NombreRationnel fonctionDeMultiplication(NombreRationnel r1, NombreRationnel r2){

    NombreRationnel nR = {0, 0};

    nR.numerateur = r1.numerateur * r2.numerateur;
    nR.denominateur = r1.denominateur * r2.denominateur;

    return nR;
}


//fonction qui somme deux rationnels
//IN : deux nombres rationnels
//OUT : la somme des deux nombres rationnels
NombreRationnel fonctionDeSomme(NombreRationnel r1, NombreRationnel r2){

    NombreRationnel nR = {0, 0};

    nR.numerateur = (r1.numerateur * r2.denominateur) + (r2.numerateur * r1.denominateur);
    nR.denominateur = r1.denominateur * r2.denominateur;

    return nR;
}


//fonction qui trouve le pgcd
//IN : un nombre rationnel
//OUT : le pgcd du dénominateur et du dénominateur ou 0 s'il n'existe pas
int fonctionPGCD(NombreRationnel nR) {

    int i = 0, pgcd = 0, min = 0;

    min = (nR.numerateur <= nR.denominateur) ? nR.numerateur : nR.denominateur;

    for (i = 2; i <= min; i++) {
        if (nR.numerateur % i == 0 && nR.denominateur % i == 0)
            pgcd = i;
    }

    return pgcd;
}


//fonction qui renvoie si possible un nombre irréductible
//IN : un nombre rationnel
//OUT : le nombre rationnel avec son numérateur et son dénominateur simplifié
NombreRationnel asterix(NombreRationnel nR) {
    int i = 0;
    int pgcd = fonctionPGCD(nR);

    if(pgcd != 0)
        nR.numerateur = nR.numerateur / pgcd;
        nR.denominateur = nR.denominateur / pgcd;

    return nR;
}