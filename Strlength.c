#include <stdio.h>
void strlength(char* s){
    int counter = 0;
    while (*s != '\0'){
        *s++;
        counter++;
    }
    printf("%i\n", counter);
}
int main(void){
    char String[] = "bananas\0";
    strlength(String);
    return 0;
}