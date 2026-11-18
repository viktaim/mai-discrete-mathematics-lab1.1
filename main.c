#include <windows.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Привет, argc = %d\n", argc);
    return 0;
}
