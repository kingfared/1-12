#include<stdio.h>

int main()
{
  int c;
  int b;

  b = 0;

  while ((c = getchar()) != EOF)
    {
      while (c == ' ' || c == '\t' || c == '\n')
	{
	  c = getchar();
	  ++b;
	}
      if (b != 0)
	{
	  putchar('\n');
	  putchar(c);
	}
      if (b == 0)
	  putchar (c);
      b = 0;
    }
}
