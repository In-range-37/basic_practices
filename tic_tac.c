#include <stdio.h>

int layout[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int i, j;

int askX() {
    int x;

    do {
        printf("Place X at (1-9): ");
        scanf("%d", &x);
    } while(x < 1 || x > 9);

    return x;
}

int askO() {
    int o;

    do {
        printf("Place O at (1-9): ");
        scanf("%d", &o);
    } while(o < 1 || o > 9);

    return o;
}

void matrix(){

    for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("\t%d\t", layout[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void chosen(){

    int x = askX();
    
    for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            if (layout[i][j] == x){
                layout[i][j] = 10;
            }
            else{
                printf("\t%d\t", layout[i][j]);
            }
        }
        printf("\n");
    }

    printf("\n");

    int o = askO();
        for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            if (layout[i][j] == o){
                layout[i][j] = 11;
            }
            else{
                printf("\t%d\t", layout[i][j]);
            }
        }
        printf("\n");
    }
    return;
}

int main(){

    matrix();
    chosen();
}