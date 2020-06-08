/*Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. A continuación, el programa debe pedir un número entre 0 y 3 y devolver el máximo de esa fila y el mínimo de esa columna. */

#include<stdio.h>

/*   _____
   2|_|_|_|
   1|_|_|_|
   0|_|_|_|
     0 1 2  
*/

int minimoXcolumna(int [][3], int);
int maximoXfila(int [][3], int);
void cargarMatriz(int [][3]);
void mostrarMatriz(int [][3]);

int main()
{
    int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n;
    //cargarMatriz(matriz);
    mostrarMatriz(matriz);
    printf("Ingrese un numero entre 0 y 3: ");
    scanf("%d", &n);
    printf("El maximo de la fila %d es %d : \n", n, maximoXfila(matriz,n));
    printf("El minimo de la columna %d es %d : \n", n, minimoXcolumna(matriz,n));
}

void cargarMatriz(int m[][3])
{
    //m={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            printf("Ingrese el valor[%d][%d]: ", i,j);
            scanf("%d",&m[i][j]);
            
        }            
}
void mostrarMatriz(int m[][3])
{ 
    for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {
            printf("%d\t",m[i][j]);
        
        }
        printf("\n");
    }

}


int maximoXfila(int m[][3], int n)
{
    int max=m[n][0];
    for(int i=1; i<3; i++)
    {
        if(m[n][i]>max)
        {
            max=m[n][i];
        }
    }

    return max;
}


int minimoXcolumna(int m[][3], int n)
{
    int min=m[0][n];
    for(int i=1; i<3; i++)
    {
        if(m[i][n]<min)
        {
            min=m[i][n];
        }
    }

    return min;
}

    



    
