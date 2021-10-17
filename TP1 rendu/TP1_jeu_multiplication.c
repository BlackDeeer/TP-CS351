#include <stdio.h>

/* 
On peux tester la procédure en:
* main
- rentrant un n non compris entre 2 et 9
- rentrant un n qui n'est pas un nombre
* jeu_multi_points
- en effectuant des erreurs volontairement 
- en rentrant des nombres anormales ( non compris entre 100 et 0 )
- en rentrant la bonne réponse 
- en verifiant si la correction est correcte
*/

void jeumulti(int x)
{
    int i,reponse,correct;
    correct = 1;
    i = 0;
    while(correct == 1 && i <= 9)
    {
        ++i;
        
        do
        {   
            printf("%d x %d = ",i,x);
            scanf("%d",&reponse);
            
        } while (reponse < 0 || reponse > 100);

        if( reponse != (i*x))
        {
            correct = 0;
            printf("C'est faux ! La reponse etait : %d", i*x);
        }
    }
}





int main()
{
    int x;
    printf("Sur quelle table de multiplication voulez vous entrainer (entre 2 et 9) ? \n");
    do
    {   
        
        scanf("%d",&x);
        
    } while (x > 10 || x < 1);

    jeumulti(x);
    
    return(0);



}

