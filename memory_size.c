#include <stdio.h>

char c = -1;

int main() {
    printf("Memory Size of int: %zu bytes\n", sizeof(int));
    printf("Memory Size of float: %zu bytes\n", sizeof(float));
    printf("Memory Size of double: %zu bytes\n", sizeof(double));
    printf("Memory Size of void: %zu bytes\n", sizeof(void));
    printf("Memory Size of pointer: %zu bytes\n", sizeof(void*));

    // Check the sizes with type qualifiers
    printf("Memory Size of short int: %zu bytes\n", sizeof(short int));
    printf("Memory Size of long int: %zu bytes\n", sizeof(long int));

    // Check if char is signed or unsigned
    printf("Memory Size of char: %zu bytes\n", sizeof(char));
    if (c < 0) {
        printf("char is signed on this system\n");
    } else {
        printf("char is unsigned on this system\n");
    }


    return 0;
}

