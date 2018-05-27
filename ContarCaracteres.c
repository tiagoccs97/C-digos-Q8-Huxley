#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int letras(char X[])
{
     int i, n=strlen(X);
     for(i=0; i<n; i++)
     {
         if((X[i]>=65 && X[i]<=90) || X[i]>=97 && X[i]<=122) return 1; 
     }
     return 0;
}

int str_tam(char X[])
{
    int tam=0;
    while(X[tam]!=' ')
    {
        tam++;
    }
    return tam;
}

void converter(char X[])
{
    int i, n=strlen(X);
    for(i=0; i<n; i++) 
    {
        if(X[i]>=65 && X[i]<=90) X[i]+=32;
        
    }
}

int contar_pares(char X[], char freq[])
{
    int i=0, par=0, Mpar=0, n=strlen(X), f=0, j;
    char p[100];
    while(i<n)
    {
        if(((X[i]>=65 && X[i]<=90) || X[i]>=97 && X[i]<=122) && ((X[i+1]>=65 && X[i+1]<=90) || X[i+1]>=97 && X[i+1]<=122)) 
        {
            p[f]=X[i]; p[f+1]=X[i+1]; f+=2; 
        }
        i++;
    }
    
    for(i=0; i<f; i+=2)
    {
        if(p[i] && p[i+1]) par++;
        for(j=i+2; j<f; j+=2)
        {
            if((p[i]==p[j] && p[i+1]==p[j+1] || p[i]==p[j+1] && p[i+1]==p[j])) par++;
            
        }
        if(par>Mpar)
        {
            Mpar=par;
            freq[0]=p[i];
            freq[1]=p[i+1];
        }
        par=0;
    }
    return Mpar;
}

int contar_a(char X[])
{
    int i, count=0, n=strlen(X);
    for(i=0; i<n; i++) 
    {
        if(X[i]==65|| X[i]==97) count++;
    }
    return count;
}

int contar_espacos(char X[])
{
    int i, count=0, n=strlen(X);
    for(i=0; i<n; i++)
    {
        if(X[i]==' ') count++;
    }
    return count;
}

int main() 
{
    char X[80], freq[10];
    int tem_pares;
    while(strcmp(X, "nao quero mais"))
    {
        scanf("%[^\n]s", X);
        getchar();
        converter(X);
        if(strcmp(X, "nao quero mais"))
        {
            
            printf("%d\n", contar_espacos(X));
            printf("%d\n", contar_a(X));
            tem_pares = contar_pares(X, freq);
            if(tem_pares)
            {
                printf("%d\n", tem_pares);
                printf("%c%c\n", freq[0], freq[1]);
            }
            else printf("NENHUM PAR\n");
        }
        
        
    }
    
	return 0;
}
