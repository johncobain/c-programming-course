#include <stdio.h>

void birthday(char name[], int age){
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main(){
    char name[]= "John";
    int age = 18;
    birthday(name, age);
    return 0;
}