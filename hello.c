#include <stdio.h>

// Very important Recursion function
void printHW(int count); // print Hello World count times

// These are function Exampal questions
void printTable(int n); // print multiplication table of n
void findLargest(int a, int b, int c); // find largest among three numbers
int sum(int a, int b); // return sum of two numbers

int main() {
    // int num;
    // printf("Enter a number to print its multiplication table: ");
    // scanf("%d", &num);
    // printTable(num); 

    // int a, b, c;
    // printf("Enter three numbers: ");    
    // scanf("%d %d %d", &a, &b, &c);
    // findLargest(a, b, c);

    // int a, b;
    // printf("Enter two numbers to find their sum: ");
    // scanf("%d %d", &a, &b);
    // int s= sum(a, b);
    // printf("Sum is %d\n",s);
    return 0;
}


// { Recursive function to print} All the work that do by loop is also done by recursion 
void printHW(int count) {
    if(count == 0) {
        return;
    }
    printf("%d Hello World\n" , count);
    printHW(count -1);
}

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
int sum(int a, int b) {
    return a + b;
}



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
