#include <stdio.h>

int main() {
    int X, Y, Z;
    printf("Enter three numbers (X Y Z): ");
    scanf("%d %d %d", &X, &Y, &Z);

    if (X >= Y && X >= Z) {
        printf("%d is greater",X);
    } else if (Y >= X && Y >= Z) {
         printf("%d is greater",Y);
    } else {
         printf("%d is greater",Z);
    }

    return 0;
}
