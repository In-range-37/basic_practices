#include <stdio.h>

int askX(){

    int X;
    printf("Place X at: ");
    scanf("%d",&X);
    return X;
}

int askO(){

    int O;
    printf("Place O at: ");
    scanf("%d",&O);
    return O;
}

int matrix(){

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
}

int main(){

    matrix();
}