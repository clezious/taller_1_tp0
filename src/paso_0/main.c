#include <stdio.h>

struct Ejemplo {
    int n;
    char a;
};

int main(void){
    struct Ejemplo ej = {1,'a'};
    int n = 1;
    char a = 'a';
    printf("sizeof() Struct: %ld\n",sizeof(ej));
    printf("sizeof() int + char : %ld\n",sizeof(n)+sizeof(a));
    return 0;
}