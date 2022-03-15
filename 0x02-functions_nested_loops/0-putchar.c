#include "main.h"
/**
 *main - Entry block
 *putchar function
 *Return: 0
 **/
int _putchar(char mytext)
{
  char mytext[] = "_putchar";
  int c;
  for (c=0; c<8; c++)
    {
      return  (write(1, &mytext, 1));
    }
  putchar('\n');

  return (0);
}
