#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char numbers[9][6] = {"one", "two", "three", "four", "five", "six", "seven",        "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            printf("%s\n", numbers[i - 1]);
        }
    else{
            i%2==0?printf("even\n"):printf("odd\n");
        }   
    }
    
    return 0;
}


