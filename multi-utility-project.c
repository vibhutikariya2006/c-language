#include<stdio.h>

int main() {

    // Delevop a program that converts Temperature from degree celsius to fahrient using the formula F = (9/5 * C) + 32 
    float celsius;
    printf("Enter the value of celsius : ");
    scanf("%f", &celsius);
    float F = (9.0 / 5.0 * celsius) + 32 ;
    
    printf("The Temperature in Fahrient is : %f", F);


    // Create a program that calculates the gross salary by adding percentages of HRA, DA and TA to base salary as chosen by the user
    int bs ;
    printf("\n Enter Your Base Salary :");
    scanf("%d" , &bs);

    int A ;
    printf("Enter HRA :");
    scanf("%d", &A);
    int HRA = (bs * A/100);

    int B ;
    printf("Enter DA :");
    scanf("%d", &B);
    int DA = (bs * B/100);


    int C ;
    printf("Enter TA :");
    scanf("%d", &C);
    int TA = (bs * C/100);

    
    int output = bs + HRA + DA + TA;
    printf("\n Output : Gross Salary is : %d" , output);
    
    // Write a program to find the third angle of a triangle when two angles are given 
    int first;
    printf("\n Enter the value of first angle of triangle :");
    scanf("%d", &first);

    int second;
    printf("Enter the value of second angle of triangle :");
    scanf("%d", &second);

    int third = 180 - (first + second);

    if (third > 0){
       printf("Third angle is : %d", third);
    }
    else{
        printf("Error");
    }
}