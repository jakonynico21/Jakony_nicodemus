#include <stdio.h>
/*functions help break down complex problems
 into smaller, reusable blocks of code. They
  improve readability, reduce redundacy, 
  and make debugging easier*/
//function decaration, definition, and calling
//function Declaration

    int add(int a, int b); //declaring a function
    int main () {
        int num1 = 5;
        int num2 =10;
        //function call
        int result = add(num1, num2); // calling a function
        printf("sum: %d\n", result);
        return 0;
    }
//function definition
int add(int a, int b) { //defining a function
    return a + b; //returns sum of a and b
}

int multiply(int a, int b) {
    return a * b;
}
//declaration tells the compiler about the function before it is used
//call executes the funtion with given arguments.
//definition contains the actual logic of the function.