#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    char c;
    int i = 0;
    
    printf("Enter a string: ");
    
    while ((c = getchar()) != '\n' && i < MAX_LENGTH - 1) {
        str[i] = c;
        i++;
    }
    
    str[i] = '\0';  // Add null terminator at the end
    
    printf("Input string: %s\n", str);
    
    return 0;
}
