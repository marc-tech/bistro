/*
** my_isneg.c for my_isneg.c in /home/demang_q/rendu/Fichier_C_J03/ex04
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Wed Sep 30 16:35:52 2015 quentin demange
** Last update Tue Oct  6 11:53:46 2015 quentin demange
*/

int	my_isneg(int nb)
{
  if (nb < 0)
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
}
