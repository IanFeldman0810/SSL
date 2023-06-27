#include <stdio.h>

int main() {
    printf("Hello, World!\n");  
    freopen("output.txt", "w", stdout); 
    printf("Hello, World!\n");
    return 0;
}