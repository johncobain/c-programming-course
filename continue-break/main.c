#include <stdio.h>

int main(){
    for(int i = 1; i<=50; i++){
        if(i==13) continue;
        if(i==21) break;
        printf("%d\n",i);
    }

    return 0;
}