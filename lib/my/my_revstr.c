



/*
** my_revstr.c for my_revstr in /home/demang_q/rendu/Piscine_C_J07/lib/my
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Tue Oct  6 13:26:03 2015 quentin demange
** Last update Thu Oct 22 22:26:17 2015 quentin demange
*/

char	*my_revstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  while (str[i] != str[0] || i != 0)
    {
      my_putchar(str[i]);
      i--;
    }
  my_putchar(str[0]);
}
