/*
// marks evaluation of students program 1
#include <stdio.h>
int main()
{
    float P, p, M, E, e, a, b;
    printf("Enter the marks of five subject: ");
    scanf("%f%f%f%f%f", &P, &p, &M, &E, &e);

    a = P + p + M + E + e;

    b = (a * 100) / 500;

    printf("sum of marks obtained = %f", a);
    printf("\nPercentage obtained = %f", b);

    return 0;
}

*/

/*

// simple and compound interest evaluation p2
#include <stdio.h>
#include <math.h>
int main()
{
    float P, R, T, CI, SI, A_si, A_ci;
    printf("Enter the principle amount, rate time period: ");
    scanf("%f%f%f", &P, &R, &T);

    SI = (P * R * T) / 100;
    A_si = P + SI;

    CI = P * pow((1 + (R / 100)), T) - P;
    A_ci = P * pow((1 + (R / 100)), T);

    printf("Simple interest = %f \n", SI);
    printf("AMOUNT of simple interest = %f \n", A_si);
    printf("Compound interest = %f \n", CI);
    printf("Compounded amount = %f \n", SI);

    return 0;
}

*/

/*

// Evaluation of area and circumference of circle p3
#include <stdio.h>
#include <math.h>

int main()
{
#define PI 3.14;
    float r, A, C;

    printf("Enter the radius of circle : ");
    scanf("%f", &r);

    C = 2 * r * PI;
    A = pow(r, 2) * PI;

    printf("Circumference of circle = %f", C);
    printf("\nArea of circle = %f", A);

    return 0;
}

*/

// ARRAY

/*

// INPUT AND PRINT N ELEMENTS OF SAME DATA TYPE
#include <stdio.h>
int main()
{
    int a[50], n;
    char b[50];
    float c[50];

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter b[%d] = ", i);
        scanf("%c", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c\t", b[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter c[%d] = ", i);
        scanf("%f", &c[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c\t", c[i]);
    }
    printf("\n");

    return 0;
}

*/

/*

// print largest and smallest element of an array
#include <stdio.h>
int main()
{
    int a[50], n, i, min1, min2, max1, max2;

    printf("Enter no. of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    min1 = a[0];
    min2 = a[0];
    max1 = a[0];
    max2 = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > max1)
        {
            if (max2 != max1)
            {
                max2 = max1;
            }
            max1 = a[i];
        }
        if (a[i] < min1)
        {
            if (min2 != min1)
            {
                min2 = min1;
            }
            min1 = a[i];
        }
    }

    printf("largest element = %d\nSecond largest element = %d \nSmallest element = %d \nSecond smallest = %d", max1, max2, min1, min2);

    return 0;
}

*/

// Serching of elements [binary and linear]

/*

// linear search

#include <stdio.h>
int main()
{
    int a[50], n, i, key, loc = -1, count = 0;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the Search element : ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            count++;
            loc = i;
        }
    }

    if (loc == -1)
        printf("Not found.\n");
    else
        printf("found %d times.\n", count);

    return 0;
}

*/

/*

// Binary Search
// array must be sorted before searching

#include <stdio.h>
int binarysearch(int a[], int n, int key)
{
    int beg = 0, mid, end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    return -1;
}

int main()
{
    int a[50], n, i, key, result;

    printf("Enter no. of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the search element : ");
    scanf("%d", &key);

    result = binarysearch(a, n, key);
    if (result != -1)
        printf("Element found at index %d ", result);
    else
        printf("Element not found");

    return 0;
}

*/

// SORTING OF ARRAY ELEMENTS

/*

// INSERTION SORT
#include <stdio.h>
void insertion(int a[], int n)
{
    int i, j, temp;

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (a[j] > temp && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[50], n, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    print(a, n);
    printf("\n");
    insertion(a, n);
    printf("Sorted Array\n");
    print(a, n);

    return 0;
}

*/

/*

// SELECTION SORTING

#include <stdio.h>

void selection(int a[], int n)
{
    int i, j, temp, min;

    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }

        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    print(a, n);
    printf("\n\n");
    selection(a, n);
    printf("Sorted array/\n\n");
    print(a, n);

    return 0;
}

*/

/*

// BUBBLE SORTING
#include <stdio.h>
void bubble(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

int main()
{
    int a[50], n, i;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    print(a, n);
    printf("\n\n");
    bubble(a, n);
    printf("Sorted array \n");
    print(a, n);

    return 0;
}

*/

// DYNAMIC MEMORY ALLOCATION[malloc() , calloc() , realloc() , free()]

/*
// malloc allocation

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    ptr = (int *)malloc(10 * sizeof(int));
    // allocation test
    if (ptr == NULL)
    {
        printf("Memory allocation failed.");

        return 0;
    }

    printf("Enter elements:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Entered elements are :\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }

    free(ptr);

    return 0;
}

*/

/*
// calloc allocation

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    ptr = (int *)calloc(10, sizeof(int));
    // allocation test
    if (ptr == NULL)
    {
        printf("Memory allocation failed.");

        return 0;
    }

    printf("Enter elements:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Entered elements are :\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }

    free(ptr);

    return 0;
}

*/

/*

//realloc allocation


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, n1, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    ptr = (int *)calloc(10, sizeof(int));
    // allocation test
    if (ptr == NULL)
    {
        printf("Memory allocation failed.");

        return 0;
    }

    printf("Enter elements:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // reallocation

    printf("Enter the new size : ");
    scanf("%d", &n1);
    ptr = (int *)realloc(ptr, (n1, sizeof(int)));

    if (ptr == NULL)
    {
        printf("Reallocation failed.\n");
        return 0;
    }

    if (n1 > n)
    {
        printf("Enter new elements:\n");
        for (i = n; i < n1; i++)
        {
            scanf("%d", &ptr[i]);
        }
    }

    printf("Entered elements are :\n");

    for (i = 0; i < n1; i++)
    {
        printf("%d\t", ptr[i]);
    }

    free(ptr);

    return 0;
}

*/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, sum = 0, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    ptr = (int *)calloc(10, sizeof(int));
    // allocation test
    if (ptr == NULL)
    {
        printf("Memory allocation failed.");

        return 0;
    }

    printf("Enter elements:");

    for (i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += ptr[i];
    }

    printf("Sum of elements = %d", sum);

    free(ptr);

    return 0;
}

*/

/*

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, sum = 0, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    ptr = (int *)calloc(10, sizeof(int));
    // allocation test
    if (ptr == NULL)
    {
        printf("Memory allocation failed.");

        return 0;
    }

    printf("Enter elements:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of elements = %d", sum);

    free(ptr);

    return 0;
}

*/

/*

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, sum = 0, Pmax, Pmin, i;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    ptr = (int *)calloc(10, sizeof(int));
    // allocation test
    if (ptr == NULL)
    {
        printf("Memory allocation failed.");

        return 0;
    }

    printf("Enter elements:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    Pmin = *ptr;
    Pmax = *ptr;
    for (i = 0; i < n; i++)
    {
        if (*(ptr + i) > Pmax)
        {
            Pmax = *(ptr + i);
        }
        if (*(ptr + i) < Pmin)
        {
            Pmin = *(ptr + i);
        }
    }

    printf("Largest elements = %d\nSmallest element = %d\n", Pmax, Pmin);

    free(ptr);

    ptr = NULL;

    return 0;
}

*/

// FUNCTION METHOD TO SOLVE PROBLEMS

/*

// Factorial using function
#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, X;
    printf("Enter the number :");
    scanf("%d", &n);
    X = factorial(n);

    printf("Factorial of %d is %d\n", n, X);

    return 0;
}

*/

/*
// FIBBONACI SERIES
#include <stdio.h>
void fibo(int n1, int n2, int n)
{
    int n3, i;
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
}

int main()
{
    int n1, n2, n;
    printf("Enter first term: ");
    scanf("%d", &n1);

    printf("Enter second term: ");
    scanf("%d", &n2);

    printf("Enter no.of terms in a series : ");
    scanf("%d", &n);

    fibo(n1, n2, n);

    return 0;
}

*/

/*

// power of number using function

#include <stdio.h>
int power(int n, int p)
{
    int i, result = 1;
    for (i = 1; i <= p; i++)
    {
        result = result * n;
    }

    return result;
}

int main()
{
    int n, p, output;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the power raised : ");
    scanf("%d", &p);

    output = power(n, p);
    printf("value obtained after raising %d to power %d is %d", n, p, output);

    return 0;
}

*/

/*

// left-most digit ofiintegral part of float point number

#include <stdio.h>
int leftmost(int n1)
{

    n1 = (n1 < 0) ? -n1 : n1;

    while (n1 > 10)
    {
        n1 = n1 / 10;
    }

    return n1;
}

int main()
{
    float n;
    int n1;
    printf("Enter the number : ");
    scanf("%f", &n);

    n1 = (int)n;
    int value;

    value = leftmost(n1);

    printf("Left_most digit of integral part of floating point number %f is %d.", n, value);

    return 0;
}

*/

// Macro and function like Macro

/*

// area of circle

#include <stdio.h>
#define pi 3.14
#define SQR(a) (a * a)
int main()
{
    float r, A;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);

    A = pi * SQR(r);
    printf("Area of circle = %f", A);

    return 0;
}

*/

// goto ,break,jump,continue

/*
// goto
#include <stdio.h>
int main()
{
    int i = 1;

start:
    if (i <= 5)
    {
        printf("%d\t", i);
        i++;
        goto start;
    }
    return 0;
}

*/

/*
// break
#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        if (i == 4)
            break;

        printf("%d\t", i);
    }
    return 0;
}

*/

/*
// continue
#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        if (i == 4)
            continue;

        printf("%d\t", i);
    }
    return 0;
}

*/

// Pointer programs

/*
// Swap of two number using function and pointer format
#include <stdio.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("In Swap function formal parameter \na=%d\tb=%d", *a,*b);
}
int main()
{
    int X, Y;
    printf("Enter two values :");
    scanf("%d\t%d", &X, &Y);
    printf("Before swapping original value :\nX = %d \t Y = %d\n", X,Y);

    swap(&X, &Y);
    printf("After swapping\nX=%d\tY=%d", X,Y);

    return 0;
}

*/

// Pointer types[void , null , dangling]
/*
#include <stdio.h>
int main()
{
    int *P = NULL;
    void *ptr;
    int a = 10;
    float b = 10.5;
    char c = 'a';

    printf("%u\n", P);
    ptr = &a;
    printf("Integer value = %d\n", *(int *)ptr);
    ptr = &b;
    printf("floating decimal value = %f\n", *(float *)ptr);
    ptr = &c;
    printf("Character value = %c\n", *(char *)ptr);

    return 0;
}

*/

// Strings
