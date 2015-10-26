/*
** min.c for min in /home/demang_q/rendu/Piscine_C_infinadd/lib/my
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Thu Oct 22 22:29:05 2015 quentin demange
** Last update Mon Oct 26 14:25:46 2015 quentin demange
*/

char	*nbmin(char *n1, char *n2)
{
  int	n1len;
  int	n2len;

  n1len = my_strlen(n1);
  n2len = my_strlen(n2);
  if (n1len < n2len)
    return (n1);
  else
    return (n2);
}
