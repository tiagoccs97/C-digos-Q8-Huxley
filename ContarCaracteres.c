#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
    int i=0, par, Mpar=0, n=strlen(X), f=0, j;
    char p[100];
    while(i<n)
    {
        if((X[i]>=65 && X[i]<=90) || X[i]>=97 && X[i]<=122) {p[f]=X[i]; f++;}
        i++;
    }
    for(i=f-1; i>=0; i-=2)
    {
        par=0;
        for(j=i-2; j>=0; j-=2)
        {
            if(p[i]==p[j] && p[i-1]==p[j-1]) par++;
            
        }
        if(par>Mpar)
        {
            Mpar=par;
            freq[1]=p[i];
            freq[0]=p[i-1];
        }
    }
    return Mpar+1;
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
    while(strcmp(X, "NAO QUERO MAIS"))
    {
        scanf("%[^\n]s", X);
        getchar();
        printf("%d\n", contar_espacos(X));
        printf("%d\n", contar_a(X));
        if(contar_pares(X, freq))
        {
            converter(X);
            printf("%d\n", contar_pares(X, freq));
            printf("%c%c\n", freq[0], freq[1]);
        }
        
    }
    
	return 0;
}
