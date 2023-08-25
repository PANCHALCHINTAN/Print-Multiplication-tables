//author ... CHINTANKUAMR PANCHAL

#include<stdio.h>
void main(){
    int N;
    printf("Enter Number:- ");
    scanf("%d", &N);

    if(N <= 0){
        printf("You Know , Always Your Answere will 0..... :) \n");
    }

    //Main Logic to print mulplication tables
    for (int i = 0; i <= 10; i++)
    {
        printf("%d X %d = %d\n", N, i, N * i);
    }
}