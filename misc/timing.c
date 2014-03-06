#include<time.h> 
#include<stdio.h>
void main()
{
clock_t t1=clock();
printf("Dummy Statement\n");
clock_t t2=clock();
printf("The time taken is.. %ju", (t2-t1));
}
