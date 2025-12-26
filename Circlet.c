#include<stdio.h>
int main(){
    // Q.1 Develop a program that prints the given right half triangle pattern using a nested for loop.
    for(int y=41; y<= 45; y++){
        for(int z=41; z<= y; z++){
            printf("%d ", z);
        }
        printf("\n");
    }
      printf("\n");
//   Q.2 Develop a program that prints the given floyd's triangle pattern using a nested for loop.
    int number = 11;
    for(int m=   5; m > 1; m--){
        for(int n=m; n<=5; n++){
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }
       printf("\n");
//    Q.3 Develop a program that prints the given left half triangle pattern using a nested for loop.
      for(int d= 5; d>= 1; d--){
        for(int e=1; e<=d; e++){
            printf("  ");
        }
       for(int f=d; f<=5; f++){
            printf("%d ",f);
        }
            printf("\n");
      }
         printf("\n");
    // Q.4 Develop a program that prints the given inverted left half triangle pattern using a nested for loop. 
for(int a=5; a>=1; a--){
     for(int c=1; c<= 5-a;c++){
        printf("  ");
    }
    for(int b=1; b<=a; b++){
       if(b%2==0){
        printf("%d ",0);
       }
       else{
        printf("%d ",1);
       }

    }
   
     printf("\n");
}

      printf("\n");
// Q.5 Develop a program that prints the given full pyramind pattern using nested for loop.
   for(int p = 5; p >= 1; p--){
        for(int r=1; r<=p; r++){
            printf("  ");
        }
       for(int q=p; q<=5; q++){
            printf("%d ",q);
        }
        for(int w=4; w>=p; w--){
            printf("%d ", w);
        }

    
         printf("\n");
    } 
         printf("\n");
    // Q.6 Develop a program that prints the given custom numeric pattern using a nested for loop.
    for(int i = 1; i<=5; i++){
        for(int j = 1; j<= i; j++){
            printf("%d ", j);
        }
        for(int k = 5; k > i; k--){
            printf("    ");
        }
        for(int j = i; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

         printf("\n");

// Q.7 Develop a program that prints the given custom alphabetic pattern using a nested for loop.(letter P)
for(int v=1; v<=5; v++){
    if(v == 1 || v == 3){
        printf("* * * * *");
    }
    else if (v == 2){
        printf("*        *");
    }
    else
    {
        printf("*");
    }
    printf("\n");
}
}
   