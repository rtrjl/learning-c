#include <stdio.h>

main()

{
  int c;
  c = getchar();
  while(c != EOF)
    {
      printf("%i\n", (c!=EOF));
      putchar(c);
      c=getchar();
    }

}
