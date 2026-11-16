#include <stdio.h>
void ASCII_VALUES(int* Num){
    char letters;
    for (int i = 0; i < 52; i++){
        if (*Num == 91){
            *Num = 97;
        }
         letters = (char)*Num;
         printf("%i is %c in ASCII\n", *Num, letters);
         *Num += 1;
    }
}
int main(void) {
    int ASCII = 65;
    ASCII_VALUES(&ASCII);

}
