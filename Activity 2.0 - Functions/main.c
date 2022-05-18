#include <stdio.h>
#include <stdlib.h>

int main () {

  float marks, tot_marks = 0;
  int i = 0, subject = 0;
  printf("Enter five numbers:\n");
  while (subject != 5)
  {
    scanf("%f", &marks);

    if (marks < 0 || marks > 100)
    {

      printf("Not a valid marks\n");

    }
    else
    {
      tot_marks += marks;
      subject++;
    }
  }
  printf("average = %.0f\n", tot_marks/5);
}

