#include <stdio.h>

int main()
{
// Develop a program that prints all alphabets from a-z by skipping 3 alphabets using a do-while loop
    char a = 'a';
    do{
        printf("%c ", a);
         a = a + 4;

    }
    while( a <= 'z' );
    printf("\n");

// develop a program to find total of digits in a number 

   int number, count = 0;
   printf("Enter the number : ");
   scanf("%d" ,&number);
   if(number < 0 ){
    number = -number;
   }

   do{
    count++;
    number = number/ 10;   
   }
   while(number!= 0);

   printf("Number of digits are : %d",count);
   printf("\n");

// Q.3  Develop a program to find sum of first and last digit of a number
    int num;
    printf("Enter the number : ");
   scanf("%d" ,&num);
    // (% is the modulus operator, which gives the remainder.) 
    int last = num % 10;  
    int first = num;
    // This loop runs as long as first has more than one digit. 
    while (first >= 10)
    {
        first = first / 10;
    };
    printf("Sum of first and last digit is : %d", first + last);
}