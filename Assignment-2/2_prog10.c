#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <=num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;

    // Count the digits
    while (num != 0) {
        digits++;
        num /= 10;
    }

    num = originalNum;
    while (num != 0) {
        int digit = num % 10;
        sum += (digit*digit*digit);
        num /= 10;
    }

    return sum == originalNum;
}

int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i + num / i;
        }
    }
    return sum == num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    if (isArmstrong(num)) {
        printf("%d is a armstrong number\n", num);
    } else {
        printf("%d is not a armstrong number\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}

