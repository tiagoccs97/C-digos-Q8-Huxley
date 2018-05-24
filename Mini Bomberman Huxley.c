#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char Z[100][100];


void explodir( int x, int y, int tam)
{	
    	int c, v, e, d;
	    if(Z[x][y]=='_')
        {
            if(x+1>tam-1)
            {
                c=0;
            }
            else c=x+1;
            if(x-1<0)
            {
                v=tam-1;
            }
            else v=x-1;
            if(y+1>tam-1)
            {
                d=0;
            }
            else d=y+1;
            if(y-1<0)
            {
                e=tam-1;
            }
            else e=y-1;

    
        
            if(Z[x][y]=='&')
            {
                Z[x][y]='_';
            }
            if(Z[c][y]=='&')
            {
                Z[c][y]='_';
            }
            if(Z[v][y]=='&')
            {
                Z[v][y]='_';
            }
            if(Z[x][e]=='&')
            {
                Z[x][e]='_';
            }
            if(Z[x][d]=='&')
            {
                Z[x][d]='_';
            }
        }   
}


int main() 
{
    int tam, B;
    int i, j, x, y;
    int c, v, e, d;
    scanf("%d", &tam);
    getchar();
    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            scanf("%c", &Z[i][j]);
        }
        getchar();
    }
    scanf("%d", &B);
    for(i=0; i<B; i++)
    {
        scanf("%d%d", &x, &y);
        explodir(x, y, tam);
    }
    for(i=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            printf("%c", Z[i][j]);
        }
        printf("\n");
    }
      
    
	return 0;
}
