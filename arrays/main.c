#include <stdio.h>

int main(){
    double prices[10] = {5.0, 10.0, 15.0, 25.0, 20.0};
    prices[5] = 5.0;
    prices[6] = 10.0;
    prices[7] = 15.0;
    prices[8] = 25.0;
    prices[9] = 20.0;
    printf("$%.2lf", prices[0]);

    return 0;
}