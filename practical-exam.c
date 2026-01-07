#include <stdio.h>
#include<string.h>
#include<ctype.h>


int factorial(int n) {
    if (n==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int swap(int *c, int *d) {
    int temp;

    temp = *c;
    *c = *d;
    *d = temp;
}
int main() {
//     // Question-1 program for finding factorial of a number
  int number;
  printf("Enter The Number : ");
  scanf("%d", &number);
   
  int b = factorial(number);
      printf("Factorial is %d" , b);
      
    // Question-2 program for finding vowel in a string
     char string[300];

    printf("\n Enter your sentence: ");
    fgets(string, sizeof(string), stdin);

    int len = strlen(string);

    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int k = 0; k < len; k++) {
        char lowercase = tolower((unsigned char)string[k]);

        if (lowercase == 'a')
            a++;
        else if (lowercase == 'e')
            e++;
        else if (lowercase == 'i')
            i++;
        else if (lowercase == 'o')
            o++;
        else if (lowercase == 'u')
            u++;
    }
      printf("a = %d\n", a);
     printf("e = %d\n", e);
    printf("i = %d\n", i);
    printf("o = %d\n", o);
    printf("u = %d\n", u);


//   Question-3 program for finding leap year
     
     int year;
     printf("\nEnter The Year : ");
     scanf("%d", &year);
     
     if(year%4 == 0){
        printf("This year is a leap year");
     }
     else{
        printf("This year is not a leap year");
     }printf("\n");
     
    //  Question-4  program for swap two integer
  int number1, number2;

    printf("\nEnter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    swap(&number1, &number2);
    printf("\n");
    printf("After swapping\n");
    printf("First number = %d\n", number1);
    printf("Second number = %d\n", number2);
    
    // Question-5 program for nested loop
    printf("\n");
    for(int i = 1; i <= 5; i++){
        for(int k = i ; k < 5; k++){
              printf("- ");
        }
        
        for(int j = 1 ; j <= i; j++){
              printf("* ");
        }printf("\n");
        
        
    }
    return 0;
}
