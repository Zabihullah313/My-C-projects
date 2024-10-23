#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    printf("Enter two integers (a and b): ");
    scanf("%d %d", &a, &b);

    int c = 0;
    int power = 0;
    while (a != 0) {
        c += (a % b) * pow(10, power);
        a /= b;
        power++;
    }

    int sum1 = 0, sum2 = 0, flag = 0;
    while (c != 0) {
        if (flag == 0) {
            sum1 += c % 10;
            flag = 1;
        } else {
            sum2 += c % 10;
            flag = 0;
        }
        c /= 10;
    }


    if (sum1 == sum2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
