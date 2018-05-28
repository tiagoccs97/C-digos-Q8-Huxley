#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char P[100], P2[100];

int palindromo(char X[])
{
    int i, n=strlen(P), j=0;
    for(i=n-1; i>=0; i--)
    {
        P2[j]=P[i];
        j++;
    }
    
    if(strcmp(P, P2)==0) return 1;
    else return 0;
}

int tam(char X[])
{
    int tam=0, count=0;
    while(X[tam])
    {
        if((X[tam]>=65 && X[tam]<=90) || X[tam]>=97 && X[tam]<=122) count++;
        tam++;
    }
    return count;
}

int main()
{
    scanf("%[^\n]s", P);
    if(palindromo(P))
    {
        if(strlen(P)%2==0) printf("SIM\n%d", strlen(P)/2);
        else printf("SIM\n%d", strlen(P)/2+1);
    }
    else printf("NAO");
	return 0;
}
