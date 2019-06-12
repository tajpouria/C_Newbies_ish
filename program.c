#include <stdio.h>
#include <math.h>

// session eight

void eight_p6()
{
  int numbers[2], max;

  for (int i = 0; i <= 1; i++)
  {
    printf("Please Enter #%d number : ", i + 1);
    scanf("%d", &numbers[i]);
  }

  numbers[0] > numbers[1] ? printf("%d \n", numbers[0]) : printf("%d \n", numbers[1]);
}

void eight_p7()
{
  char utils[3] = {'a', 'b', 'c'};
  float inputs[3];
  float delta, x1, x2;

  for (int i = 0; i <= 2; i++)
  {
    printf("Please enter %c : ", utils[i]);
    scanf("%f", &inputs[i]);
  }

  delta = inputs[1] * inputs[1] - 4 * inputs[0] * inputs[2];

  if (delta >= 0)
  {
    x1 = (-inputs[1] + sqrt(delta)) / (2 * inputs[0]);
    x1 = (-inputs[1] - sqrt(delta)) / (2 * inputs[0]);

    printf("First root equals : %6.2f \n Second root is equals : %6.2f \n", x1, x2);
  }
  else
  {
    printf("Given function doesnot provided to have real Root(s)! \n");
  }
}

void eight_p9()
{
  float grade;

  printf("Please enter the grade : ");
  scanf("%f", &grade);

  if (grade <= 20 && grade >= 17)
    printf("A \n");
  else if (grade < 17 && grade >= 15)
    printf("B \n");
  else if (grade < 15 && grade >= 12)
    printf("C \n");
  else
    printf("D \n");
}

void eight_p10()
{
  int day;

  printf("Please enter the day : ");
  scanf("%d", &day);

  if (day == 1)
    printf("Saturday \n");
  else if (day == 2)
    printf("Sunday \n");
  else if (day == 3)
    printf("Monday");
  else if (day == 4)
    printf("Tuesday");
  else if (day == 5)
    printf("Wednesday");
  else if (day == 6)
    printf("Thursday");
  else if (day == 7)
    printf("Friday");
}

void eight_p12()
{
  int number, odd = 0, event = 0;

  while (1)
  {
    printf("Please enter a number : ");
    scanf("%d", &number);

    if (number == 0)
      break;
    else if (number % 2 == 0)
      event++;
    else
      odd++;
  }

  printf("You entered %d event number and %d odd number \n", event, odd);
}

void eight_p14()
{
  for (int i = 10; i <= 50; i++)
  {
    if (i % 7 == 0)
      continue;
    printf("%6.2d", i);
  }
}

void eight_p16()
{
  int a = 0;
label:
  if (a < 66)
  {
    printf("%d", a);
    a++;
    goto label;
  }
  printf("The final quantity of is equals: %d \n", a);
}

void eight_p18()
{
  int input;

  printf("please enter a number in range one and seven [1-7] : ");
  scanf("%d", &input);

  switch (input)
  {
  case 1:
    printf("Saturday \n");
    break;
  case 2:
    printf("Sunday \n");
    break;
  case 3:
    printf("Monday \n");
    break;
  case 4:
    printf("Tuesday \n");
    break;
  case 5:
    printf("Wednesday \n");
    break;
  case 6:
    printf("Thursday \n");
    break;
  case 7:
    printf("Friday \n");
    break;

  default:
    printf("Sorry maybe : The given number is n't in ordered range! \n");
  }
}

// session nine

void nine_p16_1_findMaximum(int array[3])
{
  int max = array[0];

  for (int i = 1; i <= 2; i++)
    (max < array[i]) ? max = array[i] : 0;

  printf("%d \n", max);
}

void nine_p16()
{
  int inputs[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Please Enter value number #%d : ", i + 1);
    scanf("%d", &inputs[i]);
  }

  nine_p16_1_findMaximum(inputs);
}

void nine_p18_1_conver(int array[3])
{
  printf("%d \n", 3600 * array[0] + 60 * array[1] + array[2]);
}

void nine_p18()
{
  char *utils[] = {"Hour", "Minute", "Second"};
  int getUtils[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Please enter %s : ", utils[i]);
    scanf("%d", &getUtils[i]);
  }

  nine_p18_1_conver(getUtils);
}

float p_21_1_calculateRadius(float radius)
{
  return radius * radius * 3.14;
}

void nine_p21()
{
  float radius;

  printf("Please enter radius of Circle : ");
  scanf("%f", &radius);

  float Area = p_21_1_calculateRadius(radius);

  printf("Area is equals %f \n", Area);
}

int nine_p22_1_isPrime(int number)
{
  for (int i = 2; i < number; i++)
    if (number % i == 0)
      return 0;

  return 1;
}

void nine_p22()
{
  int number;

  printf("Please enter your number : ");
  scanf("%d", &number);

  nine_p22_1_isPrime(number) ? printf("Given number is prime \n") : printf("Given number is not prime \n");
}

int nine_p29_1_fact(int number)
{
  if (number == 0)
    return 1;

  return (number * nine_p29_1_fact(number - 1));
}

void nine_29()
{
  int number;

  printf("Please enter number for calculating it's fact : ");
  scanf("%d", &number);

  int fact = nine_p29_1_fact(number);

  printf("%d! = %d\n", number, fact);
}

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

  // session eight

  // eight_p6();
  // eight_p7();
  // eight_p9();
  // eight_p10();
  // eight_p12();
  // eight_p14();
  // eight_p16();
  // eight_p18();

  // session nine

  // nine_p16();
  // nine_p18();
  // nine_p21();
  // nine_p22();
  // nine_29();

  //session ten

  // ten_p7();
  // ten_p8();
  // ten_p9();
  // ten_p13();
  // ten_p15();

  return 0;
}
