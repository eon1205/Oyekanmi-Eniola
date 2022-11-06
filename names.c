#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("A program that accepts the names of 10 students.\n");

    int counter = 0;
    size_t maxChar = 1000;
    const char* name_arr[10];
   
    while(counter < 10)
    {
        char* input;
       
        input = (char*)malloc(maxChar);
        printf("\nEnter your name\n");
        scanf("%s", input);
        name_arr[counter++] = input;
       
    }

    for(int i = 0; i < 10; i++)
        printf("%s\n", name_arr[i]);
        printf("\n");
}
