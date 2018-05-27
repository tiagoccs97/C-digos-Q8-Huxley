#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char Receita[100][100], Ingredientes[100], pizza[100], anterior[100];

void copiar_str(char original[], char copia[])
{
    int i, n=strlen(original);
    for(i=0; i<n; i++)
    {
        copia[i]=original[i];
    }
}

int PREPARAR_PIZZA(int x)
{
    int i, j, n=strlen(Ingredientes), r=strlen(Receita[x]), talvez=1, count=0;
    while(talvez)
    {
        talvez=0;     
        copiar_str(Receita[x], pizza);
        copiar_str(Ingredientes, anterior);
        for(i=0; i<n; i++)
        {
            for(j=0; j<r; j++)
            {
                if(Ingredientes[i]==pizza[j])
                {
                    Ingredientes[i]='0';
                    pizza[j]='0';
                    
                }
            }
        
        }
        for(i=0; i<r; i++) 
        {
            if(pizza[i]!='0') 
            {
                copiar_str(anterior, Ingredientes);
                return count;
            }
        }
        count++;
        talvez=1;
        
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
            getchar();
        }
        scanf("%s", Ingredientes);
        getchar();
        for(j=0; j<R; j++) printf("%d\n", PREPARAR_PIZZA(j));
        printf("\n");
    }
	return 0;
}
