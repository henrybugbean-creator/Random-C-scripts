#include <stdio.h>

char PrimeNumber(int n){
    if (n <= 1){
        return 'N';
    }
    for (int i = 2; i <= n / i; i++){
        if (n % i == 0){
            return 'N';
        }
    }
    return 'Y';
}

int primefactors(int n, int factors[]){
    int count = 0;
    for (int i = 2; i <= n / i; i++){
        while (n % i == 0){
            factors[count] = i;
            count++;
            n /= i;
        }
    }
    if (n > 1){
        factors[count] = n;
        count++;
    }
    return count;
}


int main(){
    int factors[100];

    int num1 = 7;
    int num2 = 56;
    printf("%c\n", PrimeNumber(num1));
    int count = primefactors(num2, factors);
    for (int i = 0; i < count; i++){
        printf("%d ", factors[i]);
    }
    printf("\n");

}