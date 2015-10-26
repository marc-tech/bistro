/*
** my_strncpy.c for my_strncpy in /home/demang_q/rendu/Piscine_C_J06
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Mon Oct  5 13:44:45 2015 quentin demange
** Last update Thu Oct  8 14:31:59 2015 quentin demange
*/

char    *my_strcpy(char *dest, char *src)
{
  int	c;

  c = 0;
  while (src[c] != '\0')
    {
      dest[c] = src[c];
      c++;
    }
  return (dest);
}
