#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    int val = 5;
    int *ptr;
    int **ptr1;

    ptr = &val; // ptr get adress of val
    ptr1 = &ptr; // **ptr1 get adress of ptr

    printf(" Value is %d \n",**ptr1); //value of "val" 5

}
