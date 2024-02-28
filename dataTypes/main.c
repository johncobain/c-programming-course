#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = 'C'; //single character %c
    char b[] = "Bro";// array of characters %s

    float c = 3.141592; //4 bytes (32 bits) 6-7 digits %f
    double d = 3.141592653589793;//8bytes(64 bits) 15-16 digits %lf

    bool e = true;//1byte(true or false) %d

    char f = 100; //1byte(-128 to +127) %d or %c
    unsigned char g = 255;//1byte(0 to +255)%d or %c

    short int h = 32767; //2bytes (-32,768 to +32,767)%d
    unsigned short int i = 65535; //2bytes (0 to 65,535)%d

    int j = 2147483647; //4bytes (-2,147,483,648 to +2,147,483,647)%d
    unsigned int k = 4294967295L; //4bytes (0 to +4,294,967,295)%u

    long long int l = 9223372036854775807; //8bytes (-9quintillion to +9quintillion)%lld
    unsigned long long int m = 18446744073709551615U; //8bytes (0 to +4,294,967,29518quintillion)%llu



    printf("%c\n", a);
    printf("%s\n",b);
    printf("%f\n", c);
    printf("%0.15lf\n", d);
    printf("%d\n", e);
    printf("%c\n", f);
    printf("%d\n", g);
    printf("%d\n", h);
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%u\n", k);
    printf("%lld\n", l);
    printf("%llu\n", m);
    return 0;
}