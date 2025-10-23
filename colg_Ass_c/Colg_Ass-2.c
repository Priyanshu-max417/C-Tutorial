////////////////////////////////// Q1. Write a program to print all odd numbers between 1 and 50.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d is odd Number\n", i);
        }
    }

    return 0;
}

///////////////////////////////// Q2. Write a program to print the sum of even and odd numbers separately between 1 and N.
///////////////////////////////// (N should be user input)

#include <stdio.h>

int main()
{
    int n, sum_odd = 0, sum_even = 0;
    printf("Enter A Number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum_even = sum_even + i;
        }
        else
        {
            sum_odd = sum_odd + i;
        }
    }
    printf("Sum of Even Number is = %d\n", sum_even);
    printf("Sum of Odd Number is = %d\n", sum_odd);

    return 0;
}

/////////////////////////////////////// Q3. Write a program to calculate the factorial of a given number using a loop.

#include <stdio.h>

int main()
{
    int n, fac = 1;
    printf("Enter A Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    printf("Factorial of %d is = %d", n, fac);

    return 0;
}

//////////////////////////////////////// Q4. Write a program to display the ASCII values of all characters from A–Z

#include <stdio.h>

int main()
{
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("Character: %c\tASCII: %d\n", ch, ch);
    }

    return 0;
}

//////////////////////////////////////// Q5. Write a program to check whether a given number is a palindrome or not.

#include <stdio.h>

int main()
{
    int n, mod, rev = 0, copy;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    copy = n;
    for (int i = n; i != 0; i = i / 10)
    {
        mod = i % 10;
        rev = rev * 10 + mod;
    }
    if (copy == rev)
    {
        printf("%d is a palindrome", copy);
    }
    else
    {
        printf("%d is Not a palindrome", copy);
    }

    return 0;
}

/////////////////////////////////////////// Q6. Write a program to check whether a number is an Armstrong number or not.//(Exm = 153, 370, 371, 407 are Armstrong numbers)

#include <stdio.h>

int main()
{
    int n, mod, que = 0, copy;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    copy = n;
    for (int i = n; i != 0; i = i / 10)
    {
        mod = i % 10;
        que = que + mod * mod * mod;
    }
    // printf("%d",que);
    if (copy == que)
    {
        printf("%d is a Armstrong Number ", copy);
    }
    else
    {
        printf("%d is Not a Armstrong Number", copy);
    }

    return 0;
}

//////////////////////////////////////////// Q7. Write a program to print Fibonacci series up to N terms.

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

////////////////////////////////////////////// Q8. Write a program to check whether a number is prime or not

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter A Number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is not a Prime Number", n);
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d is a Prime Number", n);
    }
    else
    {
        printf("%d is not a Prime Number", n);
    }

    return 0;
}

////////////////////////////////////////////////   Q9. Write a program to print the following star pattern:
////////////////////////////////////////////////   *
////////////////////////////////////////////////   * *
////////////////////////////////////////////////   * * *
////////////////////////////////////////////////   * * * *

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

/////////////////////////////////////////////////  Q10. Write a program to print a right-angled triangle of numbers like:
/////////////////////////////////////////////////  1
/////////////////////////////////////////////////  2 3
/////////////////////////////////////////////////  4 5 6
/////////////////////////////////////////////////  7 8 9 10

#include <stdio.h>

int main()
{
    int num = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
