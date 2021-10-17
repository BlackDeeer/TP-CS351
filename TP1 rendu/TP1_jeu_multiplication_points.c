#include <stdio.h>

/* 
On peux tester la procédure en:
* main
- rentrant un n non compris entre 2 et 9
- rentrant un n qui n'est pas un nombre
* jeu_multi_points
- en effectuant des erreurs volontairement afin de savoir si il y a des erreurs
- en rentrant des nombres anormales ( non compris entre 100 et 0)





*/


void jeu_multi_points(int x)
{
    int i,reponse, faute;
    faute = 0;
    i = 0;
    while(i <= 9)
    {
        ++i;
        
        do
        {   
            printf("%d x %d = ",i,x);
            scanf("%d",&reponse);
            
        } while (reponse < 0 || reponse > 100);

        if( reponse != (i*x))
        {
            ++ faute; 
            reponse = i*x;
            printf("C'est faux ! La reponse etait : %d\n", reponse);
        }
    }
    printf("Bien joue, vous n'avez fait que %d erreurs !", faute);
}


int main()
{
    int x;
    printf("Sur quelle table de multiplication voulez vous entrainer (entre 2 et 9) ? \n");
    do
    {   
        
        scanf("%d",&x);
        
    } while (x > 10 || x < 1);

    jeu_multi_points(x);
    
    return(0);

}