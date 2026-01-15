#include <stdio.h>

int askingtoe() {
    int entry;
    printf("Number to cross: ");
    scanf("%d", &entry);
    return entry;
}

int main() {
    int i, j;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int choice = askingtoe();

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] == choice) {
                printf("\tX\t");
            } else {
                printf("\t%d\t", matrix[i][j]);
            }
        }
        printf("\n\n");
    }

    return 0;
}
