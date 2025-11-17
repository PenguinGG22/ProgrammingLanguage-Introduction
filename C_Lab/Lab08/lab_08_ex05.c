/* program to illustrate name hiding and scope resolution */
#include<stdio.h>
int num1 = 10; // global variables

int add_integers(int int1, int int2)
{
    int sum = int1 + int2;
    {
        //begining of block scope
        int sum = 300;
        printf("Inside block: sum = %d \n", sum);
    }   //end of block scope; sum goes out of scope
    printf("Inside function, outside block: sum = %d \n", sum);
    return sum;
}

void caller_function(void)
{
    int num1 = 1, num2 = 2, result;  //num1 supresses global num1
    result = add_integers(num1, num2); /* result = 3 */
    printf("Sum : %d", result);
}

int main()
{
    printf("Global num1= %d \n", num1);  //prints global value of int1 i.e. 10
    caller_function();
    return 0;
}