#include <stdio.h>

    void askingtoe()
        {
        int entry = printf("Number to cross: ");
        scanf("%i", &entry);
        }

int main(){

    int i, j, n;
    int matrix [3] [3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printf("\n");

    
    for (i = 0; i<3; i++){
        printf("|");
        for (j = 0; j<3; j++){
            printf("\t%d\t| ", matrix[i][j]);
        }
        printf("\n\n");
    }

    printf("\n");
    

}