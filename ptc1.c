// Program to find sum of two numbers using function parameters

#include<stdio.h>

int sum(int num1, int num2) {
    int a = num1;
    int b = num2;
    int sum = a + b;
    printf("Sum of %d & %d is: %d\n", a, b, sum);
    return sum;
}

int main() {
    sum(5, 10);
    return 0;
}