#include <stdio.h>

main()
{
  float fahr,celsius;
  int lower,upper,step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("celsius\t\tfahrenheit\n");
  while (celsius <= upper)
    {
      fahr = (celsius/(5.0/9.0))+32;
      printf("%3.0f\t\t%6.1f\n",celsius,fahr);
      celsius = celsius + step;
    }
}
