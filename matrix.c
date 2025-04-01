#include<stdio.h>

int main() {
// 3x3 matrix initialization
int matrix[3] [3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
printf("Element at [2][1]: %d\n", matrix[2][1]);
return 0;
}