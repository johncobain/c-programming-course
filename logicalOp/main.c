#include <stdio.h>
#include <stdbool.h>

int main(){
    float temp = 25;
    bool sunny = true;
    //AND
    if(temp >=0 && temp<=30 && sunny){
        printf("The weather is good!");
    }else{
        printf("The weather is bad!");
    }
    //OR
    if(temp <=0 || temp>=30){
        printf("The weather is bad!");
    }else{
        printf("The weather is good!");
    }
    //NOT
    if(!sunny){
        printf("The weather is bad!");
    }else{
        printf("The weather is good!");
    }



    return 0;
}