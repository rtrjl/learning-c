#include <stdio.h>
#include <string.h>

int main()
{
  char bob[] ="meuh";
  
  char sentence[] = "burp meuh coin";
  
  char *result =  strstr(sentence,bob);
    
  printf("%s", result);
  
  return 1;
}
