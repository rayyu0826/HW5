#include <stdio.h>


void stringReverse(const char *str) {
    if (*str == '\0') {  
        return;
    }
    stringReverse(str + 1); 
    putchar(*str);          
}

int main() {
    char str[] = "Hello, world!";
    printf("原字串: %s\n", str);
    printf("反向輸出: ");
    stringReverse(str);
    printf("\n");
    return 0;
}
