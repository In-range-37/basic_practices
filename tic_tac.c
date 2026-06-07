#include <stdio.h>

int matrix[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}};

int input(char player){
    int point;

    do{
        printf("Place %c at: ", player);
        scanf("%d", &point);
    } while(point < 1 || point > 9);

    return point;
}

void layout(){

    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int j = 0; j < 3; j++){
            printf("\t%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int chosen(int point, int trace){
    int i, j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){

            if (matrix[i][j] == point){
                matrix[i][j] = trace;
                return 1;
            }
        }
    }
    return 0;

}

int main(){

    int point;

    layout();

    do {
        point = input('X');
        if(chosen(point, 10)){
            layout();
        }
        else{
            printf("Already taken.\n");
            continue;
        }

        point = input ('O');
        if(chosen(point, 11)){
            layout();
        }
        
        else{
            printf("Already taken.\n");
            continue;
        }

    }

    while(1);
}