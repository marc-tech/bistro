/*
** infin_add.c for infin_add.c in /home/demang_q/rendu/Piscine_C_infinadd
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Mon Oct 26 12:00:59 2015 quentin demange
** Last update Mon Oct 26 17:41:15 2015 quentin demange
*/

#include <stdlib.h>
#include "my.h"

char	*setzero(int lenmax, int lenmin,char *n)
{
  char	*newstr;
  int	i;
  int	j;

  i = 0;
  j = 0;
  newstr = malloc ((lenmax + 1) * sizeof(char *));
  while(i != (lenmax - lenmin))
    {
      newstr[i] = '0';
      i++;
    }
  while(j != lenmin)
    {
      newstr[i] = n[j];
      i++;
      j++;
    }
  return (newstr);
}

char    addchar(char *newstr, char *nbmax, int point, int ret)
  {
    char  res;

    res = ((newstr[point] + nbmax[point] + ret)- 48);
    if(point = lenmax && ret == 1)
	newstr[point + 1] = '1';
    return (res);
  }
  
int     main(int ac, char **av)
{
  char  *n1;
  char  *n2;
  char	*newstr;
  int   n1len;
  int   n2len;
  char  *res;
  int   reslen;

  n1 = av[1];
  n2 = av[2];
  n1len = my_strlen(n1);
  n2len = my_strlen(n2);
  res = malloc(lenmax + 1);
  reslen = lenmax(n1len, n2len);
  if(n1len > n2len)
    newstr = setzero(n1len, n2len, n2);
  else
    newstr = setzero(n2len, n1len, n1);
  aff_reslen(res, reslen, av, newstr);
  my_putstr("\n\033[31;01m [Resultat] = \033[00m");
  my_putstr(res);
  my_putchar('\n');
  my_putchar('\n');
}

void	aff_reslen(char *res, int reslen, char **av, char *newstr)
{
  int	cursor;
  int	ret;
  char *n1;
  char *n2;

  n1 = av[1];
  n2 = av[2];
  ret = 0;
  cursor = 0;
  res[0] = 1;
  while(cursor <= reslen)
    {
      res[reslen - cursor] = addchar(newstr, nbmax(n1, n2), reslen - cursor, ret);
      ret = 0;
      if(res[reslen - cursor] > '9')
	{
	  res[reslen - cursor] = (res[reslen - cursor] - 58)+ 48;
	  ret = ret + 1;
	}
      cursor++;
    }
  return (res);
}  
  
