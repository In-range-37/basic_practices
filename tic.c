#include <stdio.h>

int main(){

    int i, j;
    int matrix [2] [3] = {{1,2,3}, {4,5,6}};

    printf("\n\n");
    for (i = 0; i<2; i++){
        printf("|");
        for (j = 0; j<3; j++){
            printf("\t%d\t| ", matrix[i][j]);
            
        }
        printf("\n\n");
    }

    printf("\n");
    

}