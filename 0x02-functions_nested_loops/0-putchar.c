#include "main.h"
/**
 *main - Entry block
 *putchar function
 *Return: 0
 **/
int _putchar(void)
{
  char mytext[] = "_putchar";
  int c;
  for (c=0; c<8; c++)
    {
     putchar(mytext[c]);
    }
  putchar('\n');

  return (0);
}
