#include <stdio.h>

int askingtoe()
    {
    int entry = printf("Number to cross: ");
    scanf("%i", &entry);
    return entry;
    }

int main(){

    int i, j;
    int choice = askingtoe();
    int matrix [3] [3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printf("\n");

    
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            if (matrix[i][j] == choice){
                printf("\tX\t");
            }
            else{
                printf("\t%d\t ", matrix[i][j]);
            }
        }
        printf("\n\n");
    }
   //askingtoe();

    printf("\n");
    

}