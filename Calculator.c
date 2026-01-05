#include<stdio.h>
int addition (int a, int b){
    return(a + b);
}

int subtract (int a, int b){
    return(a - b);
}

int multiply (int a, int b){
    return(a * b);
}

int divide (int a, int b){
    return(a / b);
}

int modula (int a, int b){
    return(a % b);
}

int main(){
    printf("Press 1 for + ");
    printf("\n Press 2 for - ");
    printf("\n Press 3 for * ");
    printf("\n Press 4 for / ");
    printf("\n Press 5 for %% ");
    printf("\n Press 0 for exit ");
    
    int number;
    printf("\n Enter choice : ");
    scanf("%d", &number);


   
 

    if(number == 0){
        printf("Succesful exit !");
    }
    else if(number <= 5) {
           int first; 
    printf(" Enter First Number : ");
    scanf("%d", &first);

    int second; 
    printf(" Enter second Number : ");
    scanf("%d", &second);
        switch(number){
            case 1 : 
                printf("%d ", addition(first,second));
                break;
            
            case 2 : 
                printf("%d ", subtract(first,second));
                break;

            case 3 : 
                printf("%d ", multiply(first,second));
                break;

            case 4 : 
                printf("%d ", divide(first,second));
                break;

            case 5 : 
                printf("%d ", modula(first,second));
                break;
            
        }

    
    }
    else{
            printf("ERROR !");
        }
}