/*
** my_strlen.c for my_strlen in /home/demang_q/rendu/Piscine_C_J04
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Mon Oct  5 11:06:17 2015 quentin demange
** Last update Sat Oct 17 11:56:31 2015 quentin demange
*/

int	my_strlen(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
