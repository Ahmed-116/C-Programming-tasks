#include <stdio.h>

void print_hello() {
    printf("Hello\n");
}

int main() {
    int i;
    // Calling the function multiple times within a loop
    for (i = 0; i < 9; i++) {
        print_hello();
    }
    return 0;
}
