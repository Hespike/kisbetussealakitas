#include <stdio.h>

void tolowercase(char str[]){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += ('a' - 'A');  //vagy +32, ugyanazt kapjuk, de a ' ' azaz a spacenek is 32 a karakterkódja
        }
    }
}

int main(){

    char str[]= "Hello World";
    tolowercase(str);
    printf("%s\n", str);

    return 0;
}