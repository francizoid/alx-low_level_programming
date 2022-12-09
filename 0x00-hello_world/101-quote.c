1   #include <stdio.h>
2   #include <unistd.h>
3
4   /**
5    *main - print quote*
6    *
7    * Description: prints Dora's quote
8    *
9    * Return: Always l (Success)
10   * /
11
12  int main(void)
13  {
14  write(2,"and that piece of art is usesful\"-Dora Korpar,2015-10-19\n",59);
15  return (1);
16  }
