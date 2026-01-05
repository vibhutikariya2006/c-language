#include<stdio.h>
#include <string.h>

int main(){
    char name[100];

    printf("Enter The String : ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
   printf("%d", len -1);



int row;
  printf("\nEnter The Size of row array : ");
  scanf("%d", &row);
  int col;
  printf("Enter The Size of col array : ");
  scanf("%d", &col);
  int arr[row][col];

  int sizerow = sizeof(arr) / sizeof(arr[0]);
  int sizecol = sizeof(arr[0]) / sizeof(arr[0][0]);

  for (int i = 0; i < sizerow; i++)
  {
    for (int j = 0; j < sizecol; j++)
    {
      printf("Enter the value of : ");
      scanf("%d", &arr[i][j]);
    }
  }

  for (int i = 0; i < sizerow; i++)
  {
    for (int j = 0; j < sizecol; j++)
    {
        printf("%d ", arr[i][j] * arr[i][j] * arr[i][j]);  
    }
    printf("\n");
  }


}