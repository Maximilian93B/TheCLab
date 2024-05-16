#include <stdio.h>
#include <stdlib.h> 

// We can use the %d to assing a value after the double quotes to print the text
// %d is used as a placeholder 
// it gets replaced by the first number 
int main () {

 printf("Today i am %d years old and next year i will be %d years old.", 31, 32 ); 
    return 0; 
    
};

// Format specs will become more clear as we get into inputs from a user 

/*

 Ex.1 
 printf("Today i am %d years old and next year i will be %d years old." , 31, 32 ); 

Ex.2 

// Here we will not get the 93.7 returned because we are using the %d to assign INT format numbers like 31,32 
// If we want to use format specs for FLOAT numbers then we can use the %f 
// We can also specifiy how many decimal places we want to use after a Floating number by using .1,.2,.3, ... etc

printf("My average grade is: %d \n" , 93.7);

printf("My average grade is: %f \n", 93.7); 

printf("My average grade is : %.1f\n", 93.7);

*/
