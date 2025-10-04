
///////////////////////// Basic  of " Pointer " ///////////////////////
#include <stdio.h>
int main(){
//Important about pointer////
// '*' Use for adress  Value
//  '&' Use for adress 
 int x;
 int *ptr;
 ptr = &x; // store the  memory adress of (X) in (ptr) variabel   
 *ptr = 0; // asign the value of (x)  by using X's adress(*ptr)
 printf("x = %d \n",x);
 printf("*ptr = %d \n", *ptr);

 *ptr += 5; // (*ptr) mean's (X) variabal because (*ptr) stored X variabel adress. 
 printf("x = %d \n",x);
 printf("*ptr = %d \n", *ptr);

 //////////////////  Pointer to Pointer ///////////////////
 int i = 5;
 int *ptr = &i;
 int **pptr = &ptr; // it's Store  the addres of ponter(*ptr) and it is a pointer to ponter variabel and Use these (**) to write that's vareabel Name .

 printf("i = %d",**pptr); 
    return 0 ;
}
///////////////////////////////////// New Update Ended  in 4th Octuber////////////////////////////////////////////

#include <stdio.h>

/////////////  Recursion function /////////////// 
void printHW(int count); // Function 1
int sum(int n); // Function 2
float canvertCtoF(float c); // Function 3
int fibonacci(int n); // Function 4
int fibonacciLoop(n);// Function 5


////////////// Normal Function's//////////////
void printTable(int n); // Function 1
void findLargest(int a, int b, int c); // Function 2


int main() {
    //use all function in 
    // Main fuction
    return 0;
}


/////////////// Recustion Function //////////////////
void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("%d Hello World\n" , count);
    printHW(count -1);
}

int sum(int n) {
    if(n == 1){
        return 1;
    }
    int sum_N_num = sum(n-1);
    int sumN = n + sum_N_num;
    return sumN;
}

float canvertCtoF(float c) {
    float far = (c * 9/5) + 32;
    return far;
}

int fibonacciLoop(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    int prev1 = 0; // f(0)
    int prev2 = 1; // f(1)
    int current;

    for(int i = 2; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

int fibonacci(int n ){
    if(n == 0) {
        return 0;
    }   
    if(n == 1) {
        return 1;
    }

    int feb = fibonacci(n-1) + fibonacci(n-2);
    return feb;
}

///////////////// Normal Function ///////////////////
void printTable(int n) {
    for(int i=1; i<=10; i++){
        int result = n*i;
        printf("%d x %d = %d\n", n, i, result);
    }
}

void findLargest(int a, int b, int c) {
    if(a >= b && a >= c) {
        printf("%d is the largest number\n", a);
    } else if(b >= a && b >= c) {
        printf("%d is the largest number\n", b);
    } else {
        printf("%d is the largest number\n", c);
    }
}




//////////////////////  Extra part [As a Deleated part ] for somthing  knowlege /////////////////////////


// #include<stdio.h>
// int main() {

//     for(int i=1; i<=100; i++) {
//        int num= i;
//        int sum = 0;

//        while(num>0){
//         sum += num % 10;
//         num /=10;
       
//        }

//        if( sum == 10){
//         printf("%d \n", i);
//     }
//     }

// int sum=0;
// for(int i=5; i<=50; i++) {
//     sum = sum + i;
//     printf("%d \n", sum);
// }

// int n;
// printf("Enter your Number: ");
// scanf("%d", &n);

// for(int i=10; i>=1; i--) {
//        int result = n*i;
//        printf("%d * %d = %d \n" ,n, i ,result);
// }

// int n;
// printf("Enter your Number: ");
// scanf("%d", &n);

// int sum = 0;
//   for(int i=n; i>=1; i--){
//    printf("%d \n", i);
//    sum = sum + i;
//   }
//   printf("The sum of %d number's is %d",n , sum);
//  int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//  int i = 1;
//  while(i<=n) {
//     printf("%d \n", i);
//     i++;
//  }
// int marks;
// printf("Enter your marks: ");
// scanf("%d", &marks);

// if(marks>=0 && marks <30) {
//     printf("C");
// }else if(marks >= 30 && marks <70) {
//     printf("B");
// }else if(marks >=70 && marks <90) {
//     printf("A");
// }else if(marks >=90 && marks <=100){
//     printf("A+");
// }else {
//     printf("Invalid input");
// }
// marks >= 30? printf("You are pass") : printf("You are fail");


     
// int day;  1=monday, 2=tuesday, 3=wednesday, 4=thursday, 5=friday, 6=saturday, 7=sunday
//     printf("Enterthe day number(1 - 7) : ");
//     scanf("%d",&day);

//    switch(day)
//    {
//     case 1:
//     printf("Monday");
//     break;
//     case 2:
//     printf("Tuesday");
//     break;
//     case 3:
//     printf("Wednesday");
//     break;
//     case 4:
//     printf("Thursday");
//     break;
//     case 5:
//     printf("Friday");
//     break;
//     case 6:
//     printf("saturday");
//     break;
//     case 7:
//     printf("Sunday");
//     break;
//     default:
//     printf("Invalid input! Please enter a number between 1 and 7.");
//    }

//    int x ;
//    printf("Enter the value of x "); 
//    scanf("%d", &x);
//    printf("%d", x>9 && x<100);
   
  

    // // Area of Squara
    // int r ;
    // printf("Enter the Radious of Circal "); 
    // scanf("%d", &r);
    // printf("Araea of circal is %f", 3.14*r*r);
//    return 0;
// }
