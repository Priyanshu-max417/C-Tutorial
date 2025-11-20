//////////////////////////////////////// Q1 Create a simple interactive program that takes user
//////////////////////////////////////// input and displays it.
#include <stdio.h>

int main() {
    char name[40];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);  // Reads a single word
    printf("Enter your age: ");
    scanf("%d", &age);
    // Display the input
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}

//////////////////////////////////////// Q2 WAP program to print the sum of few subjects and
//////////////////////////////////////// find percentage. 
#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5;
    int total;
    float percentage;

    // Input marks for 5 subjects
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculate total
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculate percentage
    percentage = (total / 5.0); // assuming each subject is out of 100

    // Output results
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}

//////////////////////////////////////// Q3 WAP to calculate the Area and Perimeter of a Rectangle
#include <stdio.h>

int main() {
    float l, b;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);

    printf("Area = %.2f\n", l * b);
    printf("Perimeter = %.2f\n", 2 * (l + b));

    return 0;
}


//////////////////////////////////////// Q4 WAP that accepts the temperature in Centigrade
//////////////////////////////////////// and converts into Fahrenheit using the formula
//////////////////////////////////////// f= (1.8*Celsius) +32. 
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (1.8 * celsius) + 32;

    // Display the result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}


//////////////////////////////////////// Q5 WAP that checks whether the two numbers entered
//////////////////////////////////////// by the user are equal or not
#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Checking equality
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } else {
        printf("Numbers are not equal.\n");
    }

    return 0;
}


//////////////////////////////////////// Q6 WAP that swaps values of two variables without
//////////////////////////////////////// and with using a third variable. 
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping (without third variable): a = %d, b = %d\n", a, b);

    return 0;
}


//////////////////////////////////////// Q7 WAP to find out the Largest Among Three Numbers
#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking largest number
    if (a >= b && a >= c) {
        printf("Largest number = %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest number = %d\n", b);
    }
    else {
        printf("Largest number = %d\n", c);
    }

    return 0;
}


//////////////////////////////////////// Q8 WAP to find that given number positive and
//////////////////////////////////////// negative number using if-else condition. 
#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check using if-else
    if (num > 0) {
        printf("The number is positive.\n");
    }
    else if (num < 0) {
        printf("The number is negative.\n");
    }
    else {
        printf("The number is zero.\n");
    }

    return 0;
} 

//////////////////////////////////////// Q9 WAP that tells whether a given year is a leap year or
//////////////////////////////////////// not using if-else if –else condition. 
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    (year % 400 == 0) ? printf("Leap Year") :
    (year % 100 == 0) ? printf("Not a Leap Year") :
    (year % 4 == 0)   ? printf("Leap Year") :
                       printf("Not a Leap Year");

    return 0;
}


//////////////////////////////////////// Q10 WAP that accepts marks of five subjects and finds
//////////////////////////////////////// percentage and prints grades according to the
//////////////////////////////////////// following criteria: Between using if-else if- else
//////////////////////////////////////// condition.
//////////////////////////////////////// 90-100%---------------------Print,, Grade A”
//////////////////////////////////////// 80-90%---------------------- Print,, Grade B”
//////////////////////////////////////// 60-80%---------------------- Print,, Grade C”
//////////////////////////////////////// Below 60%------------------Print,, Grade D”
#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, per;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    per = (total / 500) * 100;

    printf("Percentage = %.2f%%\n", per);

    if (per >= 90)
        printf("Grade A\n");
    else if (per >= 80)
        printf("Grade B\n");
    else if (per >= 60)
        printf("Grade C\n");
    else
        printf("Grade D\n");

    return 0;
}


//////////////////////////////////////// Q11 WAP to perform basic arithmetic operations
//////////////////////////////////////// (addition, subtraction, multiplication, and division)
//////////////////////////////////////// using a switch case.
#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    // Display menu
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // Taking choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Taking two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Switch case for operations
    switch(choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


//////////////////////////////////////// Q12 WAP to find the factorial of a given number using loop. 
#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;   // long long removed

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate factorial
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Output result
    printf("Factorial = %d\n", fact);

    return 0;
}


//////////////////////////////////////// Q13 WAP to print the Fibonacci series using loop. 
#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, next;

    // Input how many terms to print
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Print first two terms
    printf("%d %d ", a, b);

    // Loop for rest of the series
    for (i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}


////////////////////////////////////////// Q14 WAP to check whether the entered number is prime or not using loop. 
#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Prime check using loop
    if (n <= 1) {
        printf("Not a Prime Number\n");
        return 0;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    return 0;
}


////////////////////////////////////////// Q15 WAP to find the sum of digits of the entered number using loop
#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract digits and add them
    while (num > 0) {
        rem = num % 10;   // get last digit
        sum = sum + rem;  // add digit to sum
        num = num / 10;   // remove last digit
    }

    // Output result
    printf("Sum of digits = %d\n", sum);

    return 0;
}


////////////////////////////////////////// Q16 WAP to Input and Print Elements of an Array
#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


////////////////////////////////////////// Q17 WAP to Calculate the Sum of Array Elements
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Predefined array
    int i, sum = 0;
    int n = 5;                         // Total elements

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    // Print sum
    printf("Sum of array elements = %d\n", sum);

    return 0;
}


////////////////////////////////////////// Q18 WAP to find the minimum and maximum element of the array.
#include <stdio.h>

int main() {
    int arr[] = {10, 25, 4, 78, 15};   // Predefined array
    int n = 5;                         // Number of elements
    int i, min, max;

    // Initialize min and max with first element
    min = max = arr[0];

    // Loop to find min and max
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Output results
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}


////////////////////////////////////////// Q19 WAP to Reverse the Elements of an Array.
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int i;

    printf("Original Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}


/////////////////////////////////////////// Q20 Program to Initialize and Print a 2D Array.
#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;

    // Printing 2D array
    printf("2D Array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/////////////////////////////////////////// Q21 Program to Calculate the Sum of All Elements in a 2D Array.
#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j, sum = 0;

    // Calculate sum of all elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = sum + arr[i][j];
        }
    }

    // Print the result
    printf("Sum of all elements in 2D array = %d\n", sum);

    return 0;
}



/////////////////////////////////////////// Q22 WAP to create Simple Addition Function
#include <stdio.h>

// Function to add two numbers
int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, result;

    // Take input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Call function
    result = add(a, b);

    // Print result
    printf("Sum = %d\n", result);

    return 0;
}


/////////////////////////////////////////// Q23 WAP to create Call by value and Call by reference using functions
#include <stdio.h>

// -------- Call by Value Function --------
void callByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("Inside Call by Value: x = %d, y = %d\n", x, y);
}
// -------- Call by Reference Function --------
void callByReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("Inside Call by Reference: x = %d, y = %d\n", *x, *y);
}
int main() {
    int a = 10, b = 20;

    // Original values
    printf("Original: a = %d, b = %d\n", a, b);

    // Call by Value
    callByValue(a, b);
    printf("After Call by Value (in main): a = %d, b = %d\n", a, b);

    // Call by Reference
    callByReference(&a, &b);
    printf("After Call by Reference (in main): a = %d, b = %d\n", a, b);

    return 0;
}


/////////////////////////////////////////// Q24 Calculate Factorial Using Recursion
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;          // Base condition
    else
        return n * factorial(n - 1);   // Recursive call
}

int main() {
    int num, result;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call recursive function
    result = factorial(num);

    // Print result
    printf("Factorial of %d = %d\n", num, result);

    return 0;
}


/////////////////////////////////////////// Q25 WAP program to declare a pointer, assign it the
///////////////////////////////////////////     address of a variable, and print the variable's value using the pointer
#include <stdio.h>

int main() {
    int a = 50;      // Normal variable
    int *p;          // Pointer variable

    p = &a;          // Assign address of 'a' to pointer

    // Print value using pointer
    printf("Value of a = %d\n", a);
    printf("Value of a using pointer = %d\n", *p);   // Dereferencing

    return 0;
}


/////////////////////////////////////////// Q26 WAP to swap two elements using the concept of pointers. 
#include <stdio.h>

// Function to swap using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);   // Passing address

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}


/////////////////////////////////////////// Q27 WAP to create structures in C to store and display student details
#include <stdio.h>

// Structure definition
struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s;   // Structure variable

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}


/////////////////////////////////////////// Q28 WAP to Use a pointer to access and display structure members
#include <stdio.h>

// Structure definition
struct Employee {
    int emp_id;
    int age;
    float salary;
};

int main() {
    struct Employee e;     // Structure variable
    struct Employee *p;    // Pointer to structure

    p = &e;   // Pointer points to structure variable

    // Input using pointer
    printf("Enter Employee ID: ");
    scanf("%d", &p->emp_id);

    printf("Enter Employee Age: ");
    scanf("%d", &p->age);

    printf("Enter Employee Salary: ");
    scanf("%f", &p->salary);

    // Display using pointer
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", p->emp_id);
    printf("Age: %d\n", p->age);
    printf("Salary: %.2f\n", p->salary);

    return 0;
}


///////////////////////////////////////////  Q29 Write a program to solve a quadratic equation ax2+bx+c=0 
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if a is zero
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of the roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2lf\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}



/////////////////////////////////////////// Q30 WAP to search an element in an array using Linear Search.
#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    // Result
    if (found == 1)
        printf("Element found at position %d\n", i + 1);   // i+1 for human indexing
    else
        printf("Element not found in the array.\n");

    return 0;
}


/////////////////////////////////////////// Q31 Write a program to check if a character is a vowel or consonant.
#include <stdio.h>
int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check vowel or consonant
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("It is a Vowel.\n");
    }
    else {
        printf("It is a Consonant.\n");
    }

    return 0;
}


/////////////////////////////////////////// Q32 Write a program to perform matrix multiplication.
#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    // Input first matrix
    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][j] * B[k][j];
            }
        }
    }

    // Print result
    printf("\nResultant Matrix C (A × B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}


///////////////////////////////////////////  Q33 Write a program to print right triangle star pattern
/////////////////////////////////////////// *
/////////////////////////////////////////// * *
/////////////////////////////////////////// * *
/////////////////////////////////////////// * * *
/////////////////////////////////////////// * * * *
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 4; i++) {       // total 4 rows
        for (j = 1; j <= i; j++) {   // print stars equal to row number
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}























