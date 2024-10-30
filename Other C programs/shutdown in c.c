#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main() {
    printf("Shutting down computer...\n");
    system("shutdown /s /t 0");
    return 0;
}