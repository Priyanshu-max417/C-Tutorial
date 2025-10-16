/////////////////////////// Q1. Write a program to accept marks of five subjects, calculate total and percentage, and
/////////////////////////// display the grade according to the following conditions:
///////////////////////////  Below 50 → Fail
///////////////////////////  90–100 → Grade A+
///////////////////////////  80–89 → Grade A
///////////////////////////  70–79 → Grade B
///////////////////////////  60–69 → Grade C
///////////////////////////  50–59 → Grade D

// #include <stdio.h>
// int main()
// {
//     int marks, marks1,marks2,marks3,marks4,marks5;
//     printf("Enter your (5 Subject) marks : ");
//     scanf("%d %d %d %d %d", &marks1,&marks2,&marks3,&marks4,&marks5);
//     marks = (marks1 + marks2 + marks3 + marks4 + marks5) / 5;
//     if (marks >= 90 && marks <= 100)
//     {
//         printf("Grade A+");
//     }
//     else if (marks >= 80 && marks <= 89)
//     {
//         printf("Grade A");
//     }
//     else if (marks >= 70 && marks <= 79)
//     {
//         printf("Grade B");
//     }
//     else if (marks >= 60 && marks <= 69)
//     {
//         printf("Grade C");
//     }
//     else if (marks >= 50 && marks <= 59)
//     {
//         printf("Grade D");
//     }
//     else
//     {
//         printf("Fail");
//     }
//     return 0;
// }

/////////////////////////// Q2. Write a program to input the number of electricity units consumed and calculate the bill
/////////////////////////// according to the given rules:
/////////////////////////// 101–200 units → ₹2.5/unit
/////////////////////////// 201–300 units → ₹4/unit
/////////////////////////// Above 300 units → ₹5/unit
/////////////////////////// Up to 100 units → ₹1.5/unit
/////////////////////////// Add 10% surcharge if total bill exceeds ₹1000.

// #include <stdio.h>
// int main()
// {
//     int units;
//     float bill;
//     printf("Enter your units : ");
//     scanf("%d", &units);
//     if (units > 0 && units <= 100) // for Units 0-100
//     {
//         bill = units * 1.5;
//     }
//     else if (units > 100 && units <= 200) // for Units 101-200
//     {
//         bill = units * 2.5;
//     }
//     else if (units > 200 && units <= 300) // for Units 201-300
//     {
//         bill = units * 4;
//     }
//     else if (units > 300) // for Units above 300
//     {
//         bill = units * 5;
//     }
//     if (bill > 1000)
//     {
//         bill = bill + (0.1 * bill);
//         printf("Your bill is : %.2f", bill);
//     }
//     else
//     {
//         printf("Your bill is : Rs %f", bill);
//     }
//     return 0;
// }

////////////////////////// Q3. Write a program to check whether a given year is a leap year or not using nested if
////////////////////////// statements.
////////////////////////// (Hint: A year is leap if divisible by 4, but not by 100, except if divisible by 400.)

// #include <stdio.h>
// int main()
// {
// int year;
// printf("Enter a year : ");
// scanf("%d", &year);
// if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0 )){
//     printf("%d is a leap year", year);
// }
// else{
//     printf("%d is not a leap year", year);
// }
//     return 0;
// }

// ///////////////////////// Q4. Write a program to check whether the entered sides form a valid triangle.
// ///////////////////////// If valid, further check and display whether the triangle is Equilateral, Isosceles, or Scalene

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter three sides of triangle : ");
//     scanf("%d %d %d", &a, &b, &c);
//     if(a == b && a == c && b==c)
//     {
//         printf("Equilateral triangle");
//     }
//     else if(a == b || b == c || a == c)
//     {
//         printf("Isosceles triangle");
//     }
//     else
//     {
//         printf("Scalene triangle");
//     }
//     return 0;
// }

/////////////////////////// Q5. Write a program to input a character and check whether it is:
///////////////////////////  Alphabet (uppercase/lowercase)
///////////////////////////  Digit
///////////////////////////  Special character
/////////////////////////// Using Switch Case

// #include <stdio.h>
// int main()
// {
//     int ch, result; ;
//     printf("Enter a character : ");
//     scanf("%c", &ch);
//     if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//     {
//         result = 1;
//     }
//     else if(ch >= '0' && ch <= '9')
//     {
//         result =  2;
//     }
//     else
//     {
//         result =  3;
//     }
//     switch(result)
//     {
//     case 1:
//         printf("alphabet");
//         break;
//     case 2:
//         printf("digit");
//         break;
//     case 3:
//         printf("special character");
//         break;
//     default:
//         printf("invalid input");
//     }
// }

////////////////////////////  Q6. Write a program to input three integers and display whether they can represent the sides of
////////////////////////////  a right-angled triangle using nested if statements.
////////////////////////////  (Hint: Use Pythagoras theorem)

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);
    // Chack for valid input
    if( a>0 || b>0 || c>0){
        // Chack for right angled triangle
        if(a*a == b*b + c*c) {
            printf("Right angled triangle\n");
        }
        else{
            if(b*b == a*a + c*c) {
                printf("Right angled triangle\n");
            }
            else{
                if(c*c == a*a + b*b) {
                    printf("Right angled triangle\n");
                }
                else{
                    printf("Not a right angled triangle\n");
                }
            }
        }
    }
    else{
       printf("Valid input\n");
    }
}

///////////////////////// Q7. Write a program to input a date (day, month, year) and check whether the date is valid or
///////////////////////// invalid

// #include <stdio.h>
// int main()
// {
//     int day, month, year;
//     printf("Enter date (dd mm yyyy) : ");
//     scanf("%d %d %d", &day, &month, &year);
//     // Chack for February month and leap year
//     if((day >0 && day <=31)&&(month >0 && month <=12)&&(year >0)){
//         if(month == 2){
//             if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0 )){
//                 if(day <=29){
//                     printf("Valid date");
//                 }
//                 else{
//                     printf("Invalid date");
//                 }
//             }
//             else{
//                 if(day <=28){
//                     printf("Valid date");
//                 }
//                 else{
//                     printf("Invalid date");
//                 }
//             }
//         }
//         // Chack for months with 30 days
//         else if(month == 4 || month == 6 || month == 9 || month == 11){
//             if(day <=30){
//                 printf("Valid date");
//             }
//             else{
//                 printf("Invalid date");
//             }
//         }
//         else{
//             printf("Valid date");
//         }
//     }
//     else{
//         printf("Invalid date");
//     }
//     return 0;
// }

/////////////////////////// Q8. Write a program to calculate Net Salary of an employee based on the following:
///////////////////////////  Input basic salary
///////////////////////////  DA = 40% of basic, HRA = 20% of basic, PF = 12% of basic
///////////////////////////  If salary ≥ ₹50000, apply 10% income tax deduction
/////////////////////////// Display gross and net salary.

// #include <stdio.h>
// int main()
// {
//     float  salary ,DA, HRA, PF, TEX, Net_salary, gross_salary;
//     printf("Enter your salary : ");
//     scanf("%f", &salary);
//     if(salary > 0)
//     {
//         DA = 0.4 * salary;
//         HRA = 0.2 * salary;
//         PF = 0.12 * salary;
//         gross_salary = salary + DA + HRA;
//         printf("Your Gross salary is : Rs %.2f\n", gross_salary);
//         if(salary >= 50000)
//         {
//             TEX = 0.1 * gross_salary;
//             Net_salary = gross_salary - (TEX + PF);
//             printf("Your Net salary is : Rs %.2f\n", Net_salary);
//         }
//         else
//         {
//             Net_salary = gross_salary - PF;
//             printf("Your Net salary is : Rs %.2f\n", Net_salary);
//         }
//     }else {
//         printf("Invalid input");
//     }
//     return 0;
// }

/////////////////////////// Q9. Write a program to input a year and a month number, then print how many days are in that
/////////////////////////// month, considering leap year logic.

// #include <stdio.h>
// int main()
// {
//     int year , month;
//     printf("Enter year and month in number : ");
//     scanf("%d %d", &year, &month);
//     if((year > 0) && (month > 0 && month <= 12))
//     {
//         // Chack for February month and leap year
//         if(month == 2){
//             if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0 )){
//                 printf("29 days");
//             }
//             else{
//                 printf("28 days");
//             }
//         }
//         // Chack for months with 30 days
//         else if(month == 4 || month == 6 || month == 9 || month == 11){
//             printf("30 days");
//         }
//         else{
//             printf("31 days");
//         }
//     }
//     else{
//         printf("Invalid input");
//     }
//     return 0;
// }

/////////////////////////// Q10. Write a program to input an employee’s age, gender, and years of experience, and check eligibility
/////////////////////////// for promotion as per given conditions:
///////////////////////////  Age > 30 and experience ≥ 5 → “Eligible”
///////////////////////////  Age < 30 but experience ≥ 8 → “Eligible under fast track”

// #include <stdio.h>
// int main()
// {
//     char gender;
//     int age, exp;
//     printf("Enter your gender (M/F) : ");
//     scanf(" %c", &gender);
//     printf("Enter your age and experience : ");
//     scanf("%d %d", &age, &exp);
//     if (age > 30 && exp >= 5)
//     {
//         printf("Eligible");
//     }
//     else if (age < 30 && exp >= 8)
//     {
//         printf("Eligible under fast track");
//     }
//     else
//     {
//         printf("Not eligible");
//     }
// return 0;
// }

/////////////////////////// Q11. Write a program to check if a person can donate blood:
///////////////////////////  Age ≥ 18 and ≤ 60
///////////////////////////  Weight ≥ 50 kg
///////////////////////////  If all conditions satisfied → “Eligible to donate blood”
///////////////////////////  Otherwise → Display reason for ineligibility.

// #include <stdio.h>
// int main()
// {
//     int age, weight;
//     printf("Enter Age and Weight: ");
//     scanf("%d %d", &age, &weight);
//     if (age >= 18 && age <= 60 && weight >= 50)
//     {
//         printf("Eligible to donate blood");
//     }
//     else
//     {
//         if (age < 18)
//             printf("Not eligible due to age less than 18\n");
//         if (age > 60)
//             printf("Not eligible due to age greater than 60\n");
//         if (weight < 50)
//             printf("Not eligible due to weight less than 50\n");
//     }
//     return 0;
// }

//////////////////////////// Q12. Write a program to simulate an ATM login system:
////////////////////////////  Input correct PIN (predefined)
////////////////////////////  If correct, ask for transaction type (withdraw, deposit, check balance) using nested if
////////////////////////////  If incorrect, show “Access Denied.”

// #include <stdio.h>
// int main()
// {
//     int user_Pass, pass = 2122, choice;
//     printf("Enter the ATM pasword: ");
//     scanf("%d", &user_Pass);
//     if (user_Pass == pass)
//     {
//         printf("1. Withdraw\n2. Deposit\n3. Check balance\n");
//         printf("Enter you Choice(1-3): ");
//         scanf("%d", &choice);
//         if (choice == 1)
//         {
//             printf("Thanks Your Withdraw is Done");
//         }
//         else if (choice == 2)
//         {
//             printf("Thanks Your Deposit is Done");
//         }
//         else if (choice == 3)
//         {
//             printf("Your A/c Balanace = -1Cr ");
//         }
//         else
//         {
//             printf("Invalid transaction type");
//         }
//     }
//     else
//     {
//         printf("Access Denied");
//     }
//     return 0;
// }

