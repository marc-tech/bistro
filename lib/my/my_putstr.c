/*
** my_putstr.c for my_putstr in /home/demang_q/rendu/Piscine_C_J07/lib/my
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Tue Oct  6 11:48:33 2015 quentin demange
** Last update Thu Oct  8 14:28:57 2015 quentin demange
*/

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0') 
    {
      my_putchar(str[a]);
      a++;
    }
}
