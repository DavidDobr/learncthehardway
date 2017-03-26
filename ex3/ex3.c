#include <stdio.h>

void crash() {
    char *test = NULL;
    int i = 0;

    for(i=0; i<1000; i++){
        printf("%c", test[i]);
    }
}

int main()
{
    int age=10;
    int weight=100;

    //printf("I am %d years old\n", age);
    printf(NULL);
    printf("She is %d kg heavy\n", weight);
    crash();
    crash();
    crash();
    return 0;
}
