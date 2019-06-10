#include <stdio.h>

// session ten

void ten_p7()
{
  int array[5], sum;

  for (int i = 0; i < 5; i++)
  {
    printf("Please enter number #%d : ", i + 1);
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < 5; i++)
    sum += array[i];

  printf("Sum is equals: %d \n", sum);
}

void ten_p8()
{
  int array[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Please enter number #%d : ", i + 1);
    scanf("%d", &array[i]);
  }

  for (int i = 4; i >= 0; i--)
    printf("%4d ", array[i]);
}

void ten_p9()
{
  int array[5];

  for (int i = 0; i <= 4; i++)
  {
    printf("Please enter average #%d : ", i + 1);
    scanf("%d", &array[i]);
  }

  int max[2];

  for (int i = 0; i <= 4; i++)
  {
    max[0] = array[i];
    max[1] = i;

    (array[i] > max[0]) ? max[0] = array[i] : 0;
  }

  printf("maximum average is : %d \n", max[0]);
  printf("and it placed on #%d position on list:", max[1]);
}

void ten_p13()
{
  int array[10][10];

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      array[i][j] = (i + 1) * (j + 1);
    }
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
      printf("%4d", array[i][j]);
  }
  printf("\n");
}

void ten_p15_1_printTable(int array[][10])
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
      printf("%4d", array[i][j]);
    printf("\n");
  }
}

void ten_p15()
{
  int array[10][10];

  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      array[i][j] = (i + 1) * (j + 1);

  ten_p15_1_printTable(array);
}

int main()
{
  //session ten

  // ten_p7();
  // ten_p8();
  // ten_p9();
  // ten_p13();
  // ten_p15();

  return 0;
}
