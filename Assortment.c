#include <stdio.h>

int main()
{
//  Question-1
  int size;
    printf("Enter The Size of array : ");
    scanf("%d", &size);
   int arr1[size];

   for(int i = 0; i<size; i++){
      printf("Enter the value of : ");
      scanf("%d", &arr1[i]);

   }
   printf("Negative Elements of array is : ");
    for(int i = 0; i<size; i++){
     if(arr1[i]<0){
        printf("%d ", arr1[i]);
     }

    }
    printf("\n");

// Question-2
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
    int largest = 0;
  for (int i = 0; i < sizerow; i++)
  {
    for (int j = 0; j < sizecol; j++)
    {
      if (largest < arr[i][j])
      {
        largest = arr[i][j];
  
      }
    }
    printf("\n");
  }
  printf("largest=%d", largest);



    printf("\n");


// Question-3
   int rows;
  printf("\nEnter The Size of row array : ");
  scanf("%d", &rows);
  int cols;
  printf("Enter The Size of col array : ");
  scanf("%d", &cols);
  int arrs[rows][cols];

  int sizerows = sizeof(arrs) / sizeof(arrs[0]);
  int sizecols = sizeof(arrs[0]) / sizeof(arrs[0][0]);

  for (int i = 0; i < sizerows; i++)
  {
    for (int j = 0; j < sizecols; j++)
    {
      printf("Enter the value of : ");
      scanf("%d", &arrs[i][j]);
    }
  }
  printf("Marix is ");
for (int i = 0; i < sizecols; i++)   
{
    for (int j = 0; j < sizerows; j++) 
    {
        printf("%d ", arrs[j][i]);  
    }
    printf("\n");
}



// Question-4

   int row1;
  printf("Enter The Size of row array : ");
  scanf("%d", &row1);
  int col1;
  printf("Enter The Size of col array : ");
  scanf("%d", &col1);
  int array[row1][col1];

  int sizerow1 = sizeof(array) / sizeof(array[0]);
  int sizecol1 = sizeof(array[0]) / sizeof(array[0][0]);

  for (int i = 0; i < sizerow1; i++)
  {
    for (int j = 0; j < sizecol1; j++)
    {
      printf("Enter the value of : ");
      scanf("%d", &array[i][j]);
    }
  }
  printf("Marix is ");
   for (int i = 0; i < sizerow1; i++)
  {
    for (int j = 0; j < sizecol1; j++)
    {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }


  for (int i = 0; i < sizerow1; i++)
  {
     int rowSum = 0;
    for (int j = 0; j < sizecol1; j++)
    {
      rowSum += array[i][j];
    }
    printf("\n Sum Of row : %d ", rowSum);

  }
  for (int j = 0; j < sizecol1; j++)
  {
   int colSum = 0;
    for (int i = 0; i < sizerow1; i++)
    {
      colSum += array[i][j];
    }
    printf("\n Sum Of col: %d ", colSum);

  }
     
   
}
