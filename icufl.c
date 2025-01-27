#include<stdio.h>
int main(){
    // for loop wile loop do while loop. multiply 5 with 10 (5times)
    int n=10;
    int i=0;
    for(; i<5; i++){
        n=n*5;
        printf("%d %d\n", n, i);
    }

    for(int i=0; i<=6;i++){
        printf("hello\n");
    }

    printf("%d %d\n", n, i);
    
    while(i>0 && i<10){
        printf("hello%d\n",i);
        i++;
    }
    return 0;
}