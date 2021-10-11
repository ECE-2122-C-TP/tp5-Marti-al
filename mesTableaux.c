//
// Created by mbmar on 06/10/2021.
//


//fonction qui renvoit le plus grand des éléments saisis dans un tableau
//IN : la valeur utile pour ne prendre en compte que les éléments saisis et le tableau
//OUT : le plus grand élément
int rechercheDuPlusGrandElement(int valeurUtile, int tab[]){

    int i = 0;
    int plusGrand = tab[0];
    //dans l'exercice 2, la valeur utile est forcément supérieure ou égale à 1
    //donc le tableau ne sera pas vide et on peut alors initialiser la variable plusGrand

    for(i = 1; i < valeurUtile; i++){
        if(plusGrand < tab[i])
            plusGrand = tab[i];
    }

    return plusGrand;
}



