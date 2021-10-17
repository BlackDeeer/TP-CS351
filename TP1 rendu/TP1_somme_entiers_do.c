#include <stdio.h>

/* Lorsque la valeur d'entrée est négative, le programme ne rentre pas dans la boucle while car n est négatif et la valeur
d'initialisation de compteur est 0. Il faudrait prendre la valeur absolue de n, et ensuite prendre le négatif de la somme
pour avoir un résultat.*/

int main()
{
    int n;
    int compteur = 1, somme = 0;
    printf("Saisissez la valeur de n pour calculer la somme des n premiers entiers:");
    scanf("%d",&n);


    do
    {
        somme += compteur;
        compteur += 1;

    }  
    while(compteur <= n);

    printf("Somme des %d premiers entiers est: %d",n,somme);
    return(0);

}