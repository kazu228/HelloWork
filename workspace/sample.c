#include <stdio.h>
int HelloWorld(int num);

int main(void){
    // Your code here!
    int count = 10; 
    HelloWorld(count);
    return 0;
}

int HelloWorld(int num){
    for (int i = 0; i < num; i ++){
        if( (i + 1) % 2 == 0) {
            printf("HelloWorld:%d\n", i+1);
        }
    }
    return 0;
}