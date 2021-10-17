#include <stdio.h>

int fibonacci(int n)
{
    int un_2 = 0;
    int un_1 = 1;
    int un;

    if(n == 0)
    {
        return(un_2);
    }

    else if(n == 1)
    {
        return(un_1);
    }

    else
    {

    int i;
    for(i=2; i <= n; ++i )
        {
            un = un_1 + un_2;
            un_2 = un_1;
            un_1 = un;
        }

    return(un);

    }
}

/*
Pour tester la fonction fibonacci, on doit tester n = 0, n= 1 et un n quelconque comme n = 11 avec commme résultat 89
*/



int main()
{
    int n, un;

    printf("Quelle est la valeur de n (n > 0):\n");

    do{
        scanf("%d",&n);
    }while(n<0);

    un = fibonacci(n);
    printf("u%d = %d",n,un);

    return(0);

}