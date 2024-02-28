#include <stdio.h>

int main(){
    int x; //declaration
    x = 123; // initialization
    int y = 321; //declaration + initialization

    int age = 21; //integer
    float gpa = 2.05; //floating point number
    char grade = 'C';//single character
    char name[] = "John";//array of characters

    printf("Hello, %s\n",name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %.2f\n",gpa);
    printf("%d + %d = %d",x,y,x+y);

    return 0;
}