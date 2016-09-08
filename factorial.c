#include <stdio.h>
#include <stdlib.h>

int factorial(int x){
    int i;
    for (i = 1; i < x; i++){
        x *= i;
    }
    return x;
}
int myFact(int base){
    int i = 1, ret = 1;
    for (i; i<=base; i++){
        ret *= i;
    }
    return ret;
}
int main (){
    int factor = factorial(5);
    printf("The factorial of 5 is: %d\n", factor); // the factorial method used in Hacking The Art of Exploitation 2nd Ed.
    printf("The factorial of 5 is ACTUALLY: %d\n", myFact(5)); // What the factorial method should look like
    return 0;
}
