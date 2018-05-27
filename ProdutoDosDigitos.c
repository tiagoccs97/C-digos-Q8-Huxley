#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int tamanho(long int n[])
{
    int t;
    while(n[t])
    {
        t++;
    }
    return t;
}
void ordenar(long int n[], int tam)
{
    int i, j, aux;
    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(n[i]>n[j])
            {
                aux=n[i];
                n[i]=n[j];
                n[j]=aux;
                
            }
        }
    }
}
void mmc_para_array(long int n, long int a[], int *tam)
{
    long int i, j=0;
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            n/=i;
            a[j]=i;
            j++;
            ++*tam;
            i=1;
        }
    }
    
}
void juntar_iguais(long int a[], int tam)
{
    int i, j;
    for(i=tam-1; i>0; i--)
    {
        for(j=i-1; j>=0; j--)
        {
          if(a[i]*a[j]<10 && a[i]!=1 && a[j]!=1)
          {
              a[i]*=a[j];
              a[j]=1;
          }
          
        }
    }
}
int main() 
{
    long int n, X[1000], Y[1000];
    int tam=0, i=0;
    scanf("%ld", &n);
    mmc_para_array(n, X, &tam);
    juntar_iguais(X, tam);
    ordenar(X, tam);
    for(i=0; i<tam; i++)
    {
        if(X[i]>10)
        {
            printf("-1");
            return 0;
        }
        
        
    }
    
    for(i=0; i<tam; i++)
    {
        if(X[i]!=1) printf("%ld", X[i]);
        
    }
    printf("\n");
	return 0;
}
