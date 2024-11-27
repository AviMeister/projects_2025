#include <stdio.h>
#include <unistd.h> // For the usleep function

void typewriterEffect(const char *message, int delay) {
    while (*message) {
        putchar(*message++);
        fflush(stdout); // Force output to appear immediately
        usleep(delay);  // Delay in microseconds
    }
}

int main() {
    const char *greeting = "Hello, World!";
    const char *border = "**************";
    
    // Print the border
    typewriterEffect(border, 50000); 
    putchar('\n');
    
    // Print the greeting
    typewriterEffect(greeting, 100000);
    putchar('\n');
    
    // Print the border again
    typewriterEffect(border, 50000); 
    putchar('\n');
    
    return 0;
}
