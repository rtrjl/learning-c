#include <stdio.h>
#include <stdlib.h>

void fortune_cookie(char msg[])
{
  printf("Message reads: %s\n",msg);
  printf("msg occupies %lu bytes\n", sizeof(msg));
  printf("The quote string is stored at: %p\n",msg);

}

int main()
{
  fortune_cookie("Cookies make you fat ");
  return 1;
}
