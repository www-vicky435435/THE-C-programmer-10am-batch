
//  Data type iN C programing languge 

// 1 program using sizeof keyword

// The sizeof(variable)operator computes the size of a variable. And, to print the result returned by sizeof,
// we use either %lu or %zu format specifier.


#include <stdio.h>

int main()
{
   int a;
   char b;
   float c;
   double d;
   printf("Storage size for int data type:%d \n",sizeof(a));
   printf("Storage size for char data type:%d \n",sizeof(b));
   printf("Storage size for float data type:%d \n",sizeof(c));
   printf("Storage size for double data type:%d\n",sizeof(d));
   return 0;
}


// 2. Program

 #include<stdio.h>
int main()
{
    printf("Size of char: %ld byte\n",sizeof(char));
    printf("Size of int: %ld bytes\n",sizeof(int));
    printf("Size of float: %ld bytes\n",sizeof(float));
    printf("Size of double: %ld bytes", sizeof(double));
    return 0;
}


//3. Data Types and Variables Declarations in C

#include <stdio.h>
int main()
{
    int a = 4000; // positive integer data type
    float b = 5.2324; // float data type
    char c = 'Z'; // char data type
    long d = 41657; // long positive integer data type
    long e = -21556; // long -ve integer data type
    int f = -185; // -ve integer data type
    short g = 130; // short +ve integer data type
    short h = -130; // short -ve integer data type
    double i = 4.1234567890; // double float data type
    float j = -3.55; // float data type
}

 // 4. int Variable Declaration and Variable Initialization in two steps:
 //program :-


 #include <stdio.h> 
 void main() {
    int age;
    age = 20;
    printf("%d \n",age);
 }


 #include <stdio.h>
 void main() {
    int age = 20;
    printf("%d \n",age);

 }

 // 5. int Variable Declaration and Variable Initialization in addition program :-

  #include <stdio.h>
  void main()
   {
    int number1 = 22;
    int number2 = 23;
    int c;
    c = number1 + number2 ;
    printf("Sum of above two Number : %d \n",c);
 }  


/*Example 6: Program to add two integer numbers
To read the input numbers we are using scanf() function and then we are using printf() function to display the sum of these numbers. The %d used in scanf() and printf() functions is the format specifier which is used for int data types in C programming.
*/

#include <stdio.h>
int main()
{
   int num1, num2, sum;
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);

   sum = num1 + num2;
   printf("Sum of the entered numbers: %d", sum);
   return 0;
}


/*Example 7: Program to add two integers using function
In this program, we are writing the addition logic in the user defined function sum() and we are calling this function from the main function. To read about function, refer this guide: C Functions with example*/
#include <stdio.h>
                                /* User defined function sum that has two int
                                * parameters. The function adds these numbers and
                                * return the result of addition.*/                                 
int sum(int a, int b){
   return a+b;
}
int main()
{
   int num1, num2, num3;
   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);

   //Calling the function
   num3 = sum(num1, num2);
   printf("Sum of the entered numbers: %d", num3);
   return 0;
}
