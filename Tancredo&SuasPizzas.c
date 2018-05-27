#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char Receita[10][100], Ingredientes[100], pizza[100];

int PREPARAR_PIZZA(int x)
{
    int i, j, n=strlen(Ingredientes), r=strlen(Receita(x)), talvez, count=0;
    while(talvez)
    {
        talvez=0; pizza=Receita[x];
        for(i=0; i<n; i++)
        {
            for(j=0; j<r; i++)
            {
                if(Ingredientes[i]==pizza[j])
                {
                    Ingredientes[i]=' ';
                    pizza[j]=' ';
                }
            }
        
        }
        if(strcmp(pizza, " ")==0) {count++; talvez=1}
    }
    return count;
}

int main() 
{
    int i, j, T, R;
    
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d", &R);
        for(j=0; j<R; j++)
        {
            scanf("%s", Receita[j]);
        }
        scanf("%s", Ingredientes);
        for(j=0; j<R; j++) printf("%d\n", PREPARAR_PIZZA(j));
        putchar("\n");
    }
	return 0;
}
