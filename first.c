#include <stdio.h>


int main() {

    // use by switch case
int num,status;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num>0){
        status = 1;
    }else if(num==0){
        status = 2;
    }else{
        status = 3;
    }

    switch(status) {
        case 1:
            printf("%d is positive number",num);
            break;
        case 2:
            printf("%d is zero",num);
            break;
        case 3:
            printf("%d is an nagativ number",num);
            break;
        default:
            printf("Invalid number");
    }


    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z')){
        printf("%c is a letter", ch);
    }
    else if(ch >='0' && ch <='9'){
        printf("%c is a digit", ch);
    }
    else{
        printf("%c is a special character", ch);
    }

    int num ;
    printf("Enter your num: ");
    scanf("%d", &num);

    if(num>0){
        printf("%d is positive", num);
    }
    else if(num<0){
        printf("%d is negative", num);
    }
    else{
        printf("You entered zero");
    }
    
    int num1, num2, num3;
    printf("Enter First numbers: ");
    scanf(" %d", &num1);
    printf("Enter Second numbers: ");   
    scanf(" %d", &num2);
    printf("Enter Third numbers: ");
    scanf(" %d", &num3);
    
    if(num1>=num2 && num1>=num3){
        printf("%d is the largest number", num1);
    }
    else if(num2>=num1 && num2>=num3){
        printf("%d is the largest number", num2);
    }
    else{
        printf("%d is the largest number", num3);
    }


    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    switch(num%2){
        case 0:
            printf("%d is even", num);
            break;
        case 1:
            printf("%d is odd", num);
            break;
        default:
            printf("Invalid input");
    }
    
    return 0;
}

