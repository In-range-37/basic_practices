#include <stdio.h>

int askingX() {
    int entry;
    printf("Number to cross: ");
    scanf("%d", &entry);
    return entry;
}

int askingO(){
    int entry;
    printf("Number to round: ");
    scanf("%d", &entry);
    return entry;
}



int main() {
    int i, j;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int X = askingX();
    int O = askingO();

    do{
        printf("Type Again!\n");
        askingO();
    }
    while (X != O);

    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] == X) 
            {
                printf("\tX\t");
            }
            
            else if (matrix[i][j] == O)
            {
                printf("\tY\t");
            }
            
            else {
                printf("\t%d\t", matrix[i][j]);
            }
        }
        printf("\n\n");
    }

    return 0;
}
