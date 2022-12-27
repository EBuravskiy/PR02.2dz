#include <stdio.h>

int main()
{
    int a, b;
    printf("A=");
    scanf_s("%i", &a);
    printf("B=");
    scanf_s("%i", &b);
    if (a > b) {
        printf("A > B");
    }
    else {
        if (a == b) {
            printf("A = B");
        }
        else {
            printf("A < B");
        }
    }
    return 0;
}