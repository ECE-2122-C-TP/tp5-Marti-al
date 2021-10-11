//
// Created by mbmar on 04/10/2021.
//

#ifndef COURS5_MESSTRUCTURES_H
#define COURS5_MESSTRUCTURES_H

typedef struct{
    int numerateur;
    int denominateur;
}NombreRationnel;

void fonctionDAffichage(NombreRationnel NR);
NombreRationnel fonctionDeSaisi();
NombreRationnel fonctionDeMultiplication(NombreRationnel r1, NombreRationnel r2);
NombreRationnel fonctionDeSomme(NombreRationnel r1, NombreRationnel r2);
int fonctionPGCD(NombreRationnel nR);
NombreRationnel asterix(NombreRationnel nR);

#endif //COURS5_MESSTRUCTURES_H
