#include <stdio.h>

int main()
{
    int var1, var2, result;

    printf("What is the First Number: ");
    scanf("%d", &var1);

    printf("What is the Second Number: ");
    scanf("%d", &var2);

    char sign;
    printf("Now what do you want to do ?");
    scanf(" %c", &sign);

    if (sign == '+' ){
        result = var1 + var2;
        printf("The answer is: %d\n", result);
    }
    else if (sign == '-'){
        result = var1 - var2;
        printf("The answer is: %d\n", result);
    }
        else if (sign == '*'){
        result = var1 * var2;
        printf("The answer is: %d\n", result);
    }
        else if (sign == '/'){
        result = var1 / var2;
        printf("The answer is: %d\n", result);
    }
    else{
        printf("Invalid!!!");
    }
}


