/*
** multip.c for a in /home/nalpas_m/bistro
** 
** Made by marc nalpas
** Login   <nalpas_m@epitech.net>
** 
** Started on  Fri Oct 23 13:44:16 2015 marc nalpas
** Last update Tue Oct 27 15:05:08 2015 marc nalpas
*/

#include <stdlib.h>
#include <stdio.h>

char    *plus(char *nb1, char *nb2, char *result, int len)
{
  int a;
  int retenu;

  a = 0;
  retenu = 0;
  printf("%s\n", nb1);
  while (nb2[a] != '\0')
    a = a + 1;
  a = a - 1;
  while (len >= 0)
    {
      while (a >= 0)
        {
          nb1[len] = nb1[len] - 48 + nb2[a] - 48;
          nb1[len] = nb1[len] + 48;
          nb1[len] = nb1[len] + retenu;
          if (nb1[len] > 57)
            {
              nb1[len] = nb1[len] - 10;
              retenu = 1;
            }
          len--;
          a--;
        }
      nb1[len] = nb1[len] + retenu;
      if (nb1[len + 1] == '9' && retenu == 1)
        retenu = 1;
      else
        retenu = 0;
      len--;
    }
  return (nb1);
}

char     *add(char *nb1, char *nb2)
{
  int a;
  int b;
  char *result;

  a = 0;
  b = 0;
  while (nb1[a] != '\0')
    a = a + 1;
  while (nb2[b] != '\0')
    b = b + 1;
  if (a >= b)
    {
      result = malloc(a * sizeof(char));
      result = plus(nb1, nb2, result, a - 1);
      return (result);
    }
  if (a < b)
    {
      result = malloc(b * sizeof(char));
      result = plus(nb2, nb1, result, b - 1);
      return (result);
    }
}

char	*replace(char *result, int i)
{
  int a;

  a = 0;
  result = malloc(i * sizeof(char));
  while (a != i)
    {
      result[a] = '0';
      a = a + 1;
    }
  return (result);
}

char	*multip(char *nb1, char *nb2, int a, int b)
{
  int i;
  int a1;
  int retenue;
  char *result;
  char *tmp;

  i = a + b;
  a1 = a;
  retenue = 0;
  result = replace(result, i);
  tmp = replace(tmp, i);
  b = b - 1;
  while (a != -1 && b != 0)
    {
      a = a - 1;
      if (a == -1)
	{
	  a = a1;
	  b = b - 1;
	}
      tmp[i] = (nb2[b] - 48) * (nb1[a] - 48) + retenue;
      printf("%s\n", tmp);
      if (tmp[i] > 9)
	{
	  retenue = tmp[i] / 10;
	  tmp[i] = tmp[i] % 10;
	}
      tmp[i] = tmp[i] + 48;
      result = add(tmp, result);
    }
  result[i - 1] = retenue + 48;
  return (result);
}

char	*multip_len(char *nb1, char *nb2)
{
  int a;
  int b;
  char *result;

  a = 0;
  b = 0;
  while (nb1[a] != '\0')
    a = a + 1;
  while (nb2[b] != '\0')
    b = b + 1;
  if (a >= b)
    {
      result = multip(nb1, nb2, a, b);
    }
  else
    {
      result = multip(nb2, nb1, b, a);
    }
  printf("%s\n", result);
}

int	main(int argc, char **argv)
{
  char *nb1;
  char *nb2;

  nb1 = argv[1];
  nb2 = argv[2];
  multip_len(nb1, nb2);
}
