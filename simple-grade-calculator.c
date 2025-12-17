#include<stdio.h>

int main(){
    int marks , GradeA , GradeB,  GradeC, GradeD, GradeE, GradeF;
    printf("Enter your marks :");
    scanf("%d", &marks);
    (marks >= 90) ?  printf("Your Grade is A."): (marks >= 80 ? printf("Your Grade is B.") : (marks >= 60 ? printf("Your Grade is C."): (marks >= 50 ? printf("Your Grade is D.") : (marks >= 35 ? printf("Your Grade is E.") : printf("Your Grade is F."))) ));

    switch(marks / 10){
        case 10:
             printf(" Excellent work !");
             break;
        case 9:
             printf(" Excellent work !");
             break;
         case 8:
             printf(" well done !");
             break;
         case 7:
             printf(" well done !");
             break;
         case 6:
             printf(" Good Job !");
             break;
         case 5:
             printf(" Good Job !");
             break;
         case 4:
             printf(" You are passed, but you can do better !");
             break;
         case 3:
             printf("  you can do better !");
             break;
         case 2:
             printf(" Sorry you  failed !");
             break;
         case 1:
             printf(" Sorry you  failed !");
             break;
        
    }


    if(marks < 35){
        printf(" Please Try again next time");
    }
    else{
        printf(" You are eligible for next level");
    }
}