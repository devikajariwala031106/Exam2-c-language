#include<stdio.h>

int Factorial(int num) 
{
    int factorial = 1, i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    return factorial;
}

int main()
 {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Answer is: %d\n",Factorial(num));
    return 0;
}


