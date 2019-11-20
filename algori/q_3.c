#include<stdio.h>
#include<stdlib.h>
#define col 5
#define row 5

int **sparseMatrix,compact_mat[row][col];

int **read_matrix(int rows, int cols){

    int **mat = (int **) malloc(sizeof(int *)*rows);
    int i=0,j=0;
    for(i=0; i<rows; i++)
    /* Allocate array, store pointer  */
        mat[i] = (int *) malloc(sizeof(int)*cols); 

       for(i=0; i<rows; i++){
           for(j=0; j<cols; j++){
               scanf("%d",(*(mat+i)+j));
           }
       }
     return mat;
}
void print_matrix(int rows, int cols, int **mat){
    int i=0,j=0;
  for(i=0; i<rows; i++){    /* Iterate of each row */
        for(j=0; j<cols; j++){  /* In each row, go over each col element  */
            printf("%d ",mat[i][j]); /* Print each row element */
        }
        printf("\n");
    }
}

void free_matrix(int rows, int **mat){
    int i=0;
    for(i=0;i<rows;i++)    
        free(mat[i]);
    free(mat);
}


int main()
{
    sparseMatrix=read_matrix(3,3);
    print_matrix(3,3,sparseMatrix);

       int size = 0; 
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            if (sparseMatrix[i][j] != 0) 
                size++; 
  
    // number of columns in compactMatrix (size) must be 
    // equal to number of non - zero elements in 
    // sparseMatrix 
    int compactMatrix[3][size]; 
  
    // Making of new matrix 
    int k = 0; 
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) 
            if (sparseMatrix[i][j] != 0) 
            { 
                compactMatrix[0][k] = i; 
                compactMatrix[1][k] = j; 
                compactMatrix[2][k] = sparseMatrix[i][j]; 
                k++; 
            } 
  
    for (int i=0; i<3; i++) 
    { 
        for (int j=0; j<size; j++) 
            printf("%d ", compactMatrix[i][j]); 
  
        printf("\n"); 
    } 
    return 0; 
} 


