/**
  * Declaration: return_type (*fun_pointer_name)(argument_type_list);
  * 
  * Initialization: fun_pointer_name = function_name;
  * 
  * Calling: fun_pointer_name(actual_argument_list);
  */

#include<stdio.h>

int sumi(int a, int b) {
    return a + b;
}

int subi(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return a / b;
}

int main() {
    int a = 10, b = 5, ch;
    // Function pointer declaration.
    int (*ptr)(int, int);
    ptr = sumi;
    printf("Addition called with a function pointer: %d\n", ptr(a, b));

    // Array of function pointers, all functions have same return type and parameter list.
    int (*func_ptr[])(int, int) = {sumi, subi, multi, divi};

    printf("0:Add\n1:Sub\n2:Mul\n3:Div\nEnter: ");
    scanf("%d", &ch);

    // Calling one of the function using a function pointer.
    printf("Answer is: %d", func_ptr[ch](a, b));
}