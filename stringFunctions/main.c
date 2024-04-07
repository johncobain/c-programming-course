#include <stdio.h>
#include <string.h>

int main(){
    char string1[] = "John";
    char string2[] = "Cobain";

    // strlwr(string1);
    // strupr(string1);
    strcat(string1, string2);
    // strncat(string1,string2,1);
    // strcpy(string1, string2);
    // strncpy(string1,string2,4);

    // strset(string1, '?');
    // strnset(string1, 'x', 1);
    // strrev(string1);

    int result = strlen(string1);
    // int result = strcmp(string1, string2);
    // int result = strncmp(string1, string2,1);
    // int result = strcmpi(string1, string1);
    // int result = sctnicmp(string1, string1,1);


    printf("\n%s",string1);
    printf("\n%d",result);

    return 0;
}