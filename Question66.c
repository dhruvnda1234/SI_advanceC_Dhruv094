#include <stdio.h>
void callByValue(int x) {
    x = x + 10;
}

void callByReference(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 20, b = 20;
    
    callByValue(a);
    printf("After Call by Value, a = %d\n", a);
    
    callByReference(&b);
    printf("After Call by Reference, b = %d\n", b);
    
    return 0;
}
