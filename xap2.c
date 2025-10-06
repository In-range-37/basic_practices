#include <stdio.h>

void mySquare(){
    int var1;
    printf("Type the number to be squared: ");
    scanf("%d",&var1);

    int result1;
    result1 = var1 * var1;
    printf("Your answer is: %d\n\n", result1);

}

void myCube(){
    int var2;
    printf("Type the number to be cubed: ");
    scanf("%d",&var2);

    int result2;
    result2 = var2 * var2 * var2;
    printf("Your answer is: %d\n\n", result2);

}

void myAdd(){
    int var1, var2;
    printf("Type the 1st number to be added: ");
    scanf("%d",&var1);

    printf("Type the 2nd number to be added: ");
    scanf("%d",&var2);

    int result;
    result = var1 + var2;
    printf("Your answer is: %d\n\n", result);

}

void mySub(){
    int var1, var2;
    printf("Type the number 1st to be subtracted: ");
    scanf("%d",&var1);

    printf("Type the number 2nd to be subtracted: ");
    scanf("%d",&var2);

    int result;
    result = var1 - var2;
    printf("Your answer is: %d\n\n", result);

}

void myMultiple(){
    int var1, var2;
    printf("Type the number 1st to be multiplied: ");
    scanf("%d",&var1);

    printf("Type the number 2nd to be multiplied: ");
    scanf("%d",&var2);

    int result;
    result = var1 * var2;
    printf("Your answer is: %d\n\n", result);

}

void myDivide(){
    int var1, var2;
    printf("Type the 1st number to be divided: ");
    scanf("%d",&var1);

    printf("Type the 2nd number to be divided: ");
    scanf("%d",&var2);

    int result;
    result = var1 / var2;
    printf("Your answer is: %d\n\n", result);

}



int main()
{
    char sign;
    printf("What operation do you want to perform: ");
    scanf(" %c", &sign);

    if (sign == '+' || sign =='A' || sign =='a' ){
        myAdd();
        return 0;
    }

    else if (sign == '-' || sign == 'G'|| sign == 'g'){
        mySub();
        return 0;
    }

    else if (sign == '*'|| sign == 'm'|| sign == 'M'){
        myMultiple();
        return 0;
    }

    else if (sign == '/' || sign == 'D' || sign == 'd'){
        myDivide();
        return 0;
    }

    else if (sign == 'S' || sign == 's' || sign == '2'){
        mySquare();
        return 0;
    }

    else if (sign =='C' || sign == 'c' || sign == '3'){
        myCube();
        return 0;
    }

}
