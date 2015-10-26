/*
** my_strncpy.c for my_strncpy in /home/demang_q/rendu/Piscine_C_J06/ex_03
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Mon Oct  5 16:29:22 2015 quentin demange
** Last update Thu Oct  8 14:36:18 2015 quentin demange
*/

char    *my_strncpy(char *dest, char *src, int nb)
{
  int	c;
  int	t;

  t = 0;
  c = 0;
  while (src[c] != '\0' && t <= nb)
    {
      dest[c] = src[c];
      c++;
      t++;
    }
}

