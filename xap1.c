#include <stdio.h>

int main()
{
    int var1, var2, result;

    char sign;
    printf("What operation do you want to perform: ");
    scanf(" %c", &sign);

    printf("What is the First Number: ");
    scanf("%d", &var1);

    printf("What is the Second Number: ");
    scanf("%d", &var2);


    if (sign == '+' || sign =='A' || sign =='a' ){
        result = var1 + var2;
        printf("The answer is: %d\n", result);
    }
    else if (sign == '-' || sign == 'G'|| sign == 'g'){
        result = var1 - var2;
        printf("The answer is: %d\n", result);
    }
    else if (sign == '*'|| sign == 'm'|| sign == 'M'){
        result = var1 * var2;
        printf("The answer is: %d\n", result);
    }
    else if (sign == '/' || sign == 'D' || sign == 'd'){
        result = var1 / var2;
        printf("The answer is: %d\n", result);
    }
    else if (sign == 'S' || sign == 's' || sign == '2'){
        result = var1 * var1;
        printf("The answer of the square is: %d\n", result);
    }
    else if (sign =='C' || sign == 'c' || sign == '3'){
        result = var1 * var1 * var1;
        printf("The answer of the cube is: %d\n", result);
    }
    else{
        printf("Invalid");
    }
}


