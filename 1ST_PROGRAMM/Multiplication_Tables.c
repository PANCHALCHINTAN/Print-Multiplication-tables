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
/*
        --------------OutPut-----------------
            Enter Number:- 23
            
            23 X 0 = 0
            23 X 1 = 23
            23 X 2 = 46
            23 X 3 = 69
            23 X 4 = 92
            23 X 5 = 115
            23 X 6 = 138
            23 X 7 = 161
            23 X 8 = 184
            23 X 9 = 207
            23 X 10 = 230
*/
