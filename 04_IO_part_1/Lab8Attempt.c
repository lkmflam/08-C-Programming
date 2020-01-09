#include <stdio.h>

int main(void)
{
  char name[15] = {0};
  printf("Type your first name: ");
  scanf("%s",name);
  printf("Pleased to meet you, %s \n",name);
  return(0);
} 