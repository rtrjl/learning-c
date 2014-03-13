#include <stdio.h>

main()
{
  int c,precchar, n1;
  
  n1 = 0;
  
  while( (c = getchar()) != EOF  )
    {
      if (c == ' ')
        {
          if (precchar != ' ')
            {
            putchar(c);
            }
        }
      else
        {
          putchar(c);
        }
      precchar = c;
    }

  
}
