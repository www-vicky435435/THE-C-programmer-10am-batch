
/*   The Dear Studant this Program your understand perpuse */
          /*  You learn and Become a programmer */ 



// 1. program 

// #include<stdio.h>
// int main(){
//     printf("First line \n");

// }


// //2. ASCII program using scanf function

// #include <stdio.h> 
// int main() {   
//     char c;   
//     printf("Enter a character: "); 
//     scanf("%c", &c);   
    
    
//     printf("ASCII value of %c = %d", c, c);

//     return 0;
// }


// // 3. ASCII Progam 

// #include <stdio.h>
// int main()
// {
//     char chr;
//     printf("Enter a character: ");
//     scanf("%c", &chr);     

//     // When %c is used, a character is displayed

//     printf("You entered %c.\n",chr);  

//     // When %d is used, ASCII value is displayed'
    
//     printf("ASCII value is %d.", chr);  
//     return 0;
// }



// // 4 Keyword and identifer Example program


// #include <stdio.h>

// int main()  
// {  
//     int a=10;  
//     int A=20;  
//     printf("Value of a is : %d",a);  
//     printf("\nValue of A is :%d",A);  
//     return 0;  
// }  




// /*
// Example Program :- 5
// const int x = 10 ;
// Here, 'x' is a integer constant with fixed value 10. */


// #include<stdio.h>
// #include<conio.h>
// void main(){
//    int i = 9 ;
//    const int x = 10 ;
//    i = 15 ;
//   // x = 100 ; // creates an error
//    printf("i = %d\nx = %d", i, x ) ;
// }



// /*
// Example  Program : 6
// #define PI 3.14
// Here, PI is a constant with value 3.14
// */


//  #include<stdio.h>
//  #include<conio.h>

// #defien  PI  3.14

// void main(){
//    int r, area ;
   
//    printf("Please enter the radius of circle : ") ;
//    scanf("%d", &r) ;
   
//    area = PI * (r * r) ;
   
//    printf("Area of the circle = %d", area) ;
// }

// //EXAMPLE 7  PROGRAM FOR C PRINTF() FUNCTION:

// #include <stdio.h>
// int main()
// {
//    char ch = 'A';
//    char str[20] = "THE  P ";
//    float flt = 10.234;
//    int no = 150;
//    double dbl = 20.123456;
//    printf("Character is %c \n", ch);
//    printf("String is %s \n" , str);
//    printf("Float value is %f \n", flt);
//    printf("Integer value is %d\n" , no);
//    printf("Double value is %lf \n", dbl);
//    printf("Octal value is %o \n", no);
//    printf("Hexadecimal value is %x \n", no);
//    return 0;
// }


// //Example 7 printf function program
// /*
// #include<stdio.h>
// int main() 
// {

//  int rollnum = 1234;
//  char name[10] = "program", gender = 'M';
//  float height = 4.700;
    
//     printf("Roll no :-   %d  \n",rollnum);
//     printf("Name :-  %s \n", name);
//     printf("Gender :- %c  \n", gender);
//     printf("Height :-  %f  \n", height);

//     return 0;

// }
// */

// // C Program to Print an Integer (Entered by the User)

// #include <stdio.h>
// int main() {   
//     int number;
   
//     printf("Enter an integer: ");  
    
//     // reads and stores input
//     scanf("%d", &number);

//     // displays output
//     printf("You entered: %d", number);
    
//     return 0;
// }


#include <stdio.h>
int main()
{
  
 int EmployNo;
 char Employname[100];
 float Empheight;
 double EmploySalary;

 printf("Enter Employ Number  \n");
 scanf("%d", &EmployNo);

 printf("Enter Employ Name  \n");
 scanf("%s", &Employname);

 printf("Enter Employ Height  \n");
 scanf("%f", &Empheight);

 printf("Enter Employ  Salary \n");
 scanf("%lf", &EmploySalary);

 return 0;


}

