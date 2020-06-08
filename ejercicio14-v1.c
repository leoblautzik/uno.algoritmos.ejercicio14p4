/*Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. A continuación, el programa debe pedir un número entre 0 y 3 y devolver el máximo de esa fila y el mínimo de esa columna. */

#include<stdio.h>
#include<stdlib.h>
/*   _____
   2|_|_|_|
   1|_|_|_|
   0|_|_|_|
     0 1 2  
*/

void cargarMatriz(int [][3], int, int);
void mostrarMatriz(int [][3],int ,int);

int main()
{
    int f=3,c=3;
    
    int matriz[3][3] = {{-1,5,3},
                        {1,-5,2},
                        {3,-8,12}};

    //cargarMatriz(matriz,f,c);
    mostrarMatriz(matriz,f,c);
}


void mostrarMatriz(int m[][3], int f, int c)
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









    



    
