#include <stdio.h>
#include <string.h>
int main() {

  // Question-2 Frequency Counter
    
 
    char str[200];
    int count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == ' ' || str[i] == '\n')
            continue;

        count = 1;

        for (int j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
                str[j] = '\0';   // mark counted
            }
        }

        if (str[i] != '\0')
            printf("%c = %d\n", str[i], count);
    }

  // Question-1 Palindrome
    
         char string[300];

    printf("\n Enter your word : ");
    // fgets(string, sizeof(string), stdin);
    scanf("%s" , &string );

    int len = strlen(string);
    int start = 0;
    int end = strlen(string) - 1;
    
    while (start < end){
        if(string[start]  != string[end]){
                printf("Not a Palindrome");
                  return 0;  
        }
        start++;
        end--;
    }
     printf("Palindrome\n");

        return 0;
}
