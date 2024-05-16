#include <stdio.h>

/*
For our First Project we are going to create a simple calculator.
it should return and print the following mathematical operations: 

Addition (+)
Subtraction (-)
Multiplication (*)
Division(/)
Remainder(%)


We will need 5 different print commands
We will need to use format specs 
This milestone is to practice using the print command and using format specifications 
*/




int main () {
 // first lets print addition 
 // assign %d to 2 and 5 and them add 
printf(" %d + %d = %d \n", 2 , 5 , 2+5);

// Multiplication 
// assign %d to 2 , 5 then 2*5 
printf(" %d * %d = %d \n", 2 , 5 , 2*5);
// Division 
// assign %d 5 , 2 then 5/2 
printf(" %d / %d = %d \n", 5, 2, 5/2);

// Remainders 
// assign %d 5 , 2 then 5%2
// We need to use %% as the operator to get the remainder
// %% is used to print literal '%' character. printf will interpret '%' as a start of a format specifier.
// We need to use '%%' to escape it. 
// '%%' will print the literal character = 1 

printf(" %d %% %d = %d \n", 5, 2, 5%2);
 return 0; 

}




