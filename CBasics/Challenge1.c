#include <stdio.h> 
#include <stdlib.h>


int main () {
 printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);

return 0; 

}




/**

Given 10 exercises to practice format specifiers using the "printf" function.


1. printf("We have %d coins in the bank\n", 100);
    a. We have 100 Coins in the bank 

2. printf("We have %f coins in the bank\n", 125.7);
    a. printf("We have %.1f in the bank\n", 125.7); 

3. printf("Year = %d\n", 2020);
    a. Year = 2020

4. printf("Your average grade is: %f \n", 95.13);
    a. printf("Your average grade is %.2f\n" , 95.13);

5. printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
    a. num1 = 5 , num 2 = 7 , sum = 12 ; 

6. printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
    a. printf("num1 = %.1f , num2 = %.1f, sum = %.1f\n", 5.2, 7.3, 9.5);

7. printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
    a. num1 = 5, num2 = 3 , sub = 2  

8. printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
    a. a = 3 , b  = 5 , sum = a+b = 8  

9. printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
    a. a = 3 , b = 5 , c = 3 , sum = a + b = 8 


10. printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
    a. a  =3 , b = 5 , sum = a+b = 3 + 5 = 8 

Note: the numbers that the placeholder "holds" - do not necessarily have to be so
small, they can greater than 100, 1000, and even more...

*/