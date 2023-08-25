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
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", N, i, N * i);
    }
}

/*
------------------OutPut-------------------                                                                                                                                                                                     
        Enter Number:- 13
        13 X 1 = 13
        13 X 2 = 26
        13 X 3 = 39
        13 X 4 = 52
        13 X 5 = 65
        13 X 6 = 78
        13 X 7 = 91
        13 X 8 = 104
        13 X 9 = 117
        13 X 10 = 130
*/
                     
