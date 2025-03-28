#include <stdio.h>
#include <stdbool.h> //for boolean data types

// function that takes integers and returns a boolean

bool isEven(int num);
    if (num % 2 == 0) {
        return true; //if even
    }else {
        return false; //if odd
    }

    int main() {
        int number = 8;

        //function call
        if (result) {
            printf("%d is even \n",number);
        }else {
            printf("%d is odd \n", number);
        }
        return 0;
    }