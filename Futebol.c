#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a[1000], b[1000];

void comprar_gols(int *G, int i)
{
    while(*G && a[i]-b[i] < 1)
    {
        a[i]++;
        --*G;
    }
}

void ordenar_gols(int a[], int b[], int n)
{
    int i, j, aux;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((a[i]-b[i])<(a[j]-b[j]))
            {
                aux=a[i]; a[i]=a[j]; a[j]=aux;
                aux=b[i]; b[i]=b[j]; b[j]=aux;
            }
        }
    }
}

void resultado(int *pontos, int a, int b)
{
    if(a==b) *pontos+=1;
    if(a>b) *pontos+=3;
}

int main() 
{
    int N, G, i, pontos=0;
    scanf("%d %d", &N, &G);
    for(i=0; i<N; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
    }
    ordenar_gols(a, b, N);
    for(i=0; i<N; i++)
    {
        comprar_gols(&G, i);
        resultado(&pontos, a[i], b[i]);
    }
    
    printf("%d", pontos);
	return 0;
}
