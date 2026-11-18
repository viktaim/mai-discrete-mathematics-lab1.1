#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

const char OPERATORS[9][3] = {"!", "&", "|", "^", "=", "#", "/"};

bool findElem(char arr[9][3], int n, char elem){
    for (int i = 0; i < n; i++){
        if (strcmp(arr[i], elem) == 0){
            return true;
        }
    }
    return false;
}

int tokenizer(const char formula[], char tokens[]){
    int count = 0;
    for (int elem = 0; formula[elem] != '\0'; elem++){
        
    }
}