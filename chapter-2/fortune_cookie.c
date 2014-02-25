#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))

void fortune_cookie(char msg[])
{
  printf("Message reads: %s\n",msg);
  printf("msg occupies %lu bytes\n", NUM_ELEM(msg));
  printf("The quote string is stored at: %p\n",msg);

}

int main()
{
  fortune_cookie("Cookies make you fat ");
  return 1;
}

