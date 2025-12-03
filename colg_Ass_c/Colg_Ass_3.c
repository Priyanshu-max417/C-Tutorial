///////////////////////////////////////////// Q1. Write a program to find maximum of two numbers using a function

#include <stdio.h>

void max(int a, int b){
    if(a > b){
        printf("Between %d and %d Gratest Number is = %d",a,b,a);
    }
    else if(a < b){
         printf("Between %d and %d Gratest Number is = %d",a,b,b);
    }
    else{
        printf("Both Number are Equal");
    } 
}


int main(){
    int num1 , num2;
    printf("Enter Two Number\n");
    scanf("%d %d",&num1,&num2);
    
    max(num1,num2);
    return 0;
}

/////////////////////////////////////////////  Q2. Write a recursive program to find factorial of a number.

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  
    } else {
        return n * factorial(n - 1);  
    }
}

int main() {
    int num;
    printf("Enter a Number of Factorial ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}

/////////////////////////////////////////////  Q3. Write a program to search an element using linear search.

#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // return index if found
        }
    }
    return -1;  // if not found
}

int main() {
    int arr[] = {10, 25, 30, 45, 50, 60};
    int n = 6;
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

/////////////////////////////////////////////  Q4. Write a program to swap two numbers using pointers.

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;   
    *x = *y;     
    *y = temp;   
}

int main() {
    int a, b;

    printf("Enter two numbers for swaping: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // pass addresses of a and b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

/////////////////////////////////////////////  Q5. Write a program to store and display information of multiple students using structures.

#include <stdio.h>

// Define structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];  // Array of structures

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", &students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student details
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }

    return 0;
}

