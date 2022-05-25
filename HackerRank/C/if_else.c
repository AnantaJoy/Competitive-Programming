#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    int n;
    scanf("%d", &n);
    char numbers[10][15] = {"one", "two", "three", "four", "five","six", "seven", "eight","nine","Greater than 9"};
    if(n >= 1 && n <= 9){
        printf("%s\n", numbers[n-1]);
    }
    else{
        printf("%s\n", numbers[9]);
    }
    return 0;
}