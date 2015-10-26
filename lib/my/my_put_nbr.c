
/*
** my_put_nbr.c for my_put_nbr in /home/demang_q/rendu/Piscine_C_J03
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Sun Oct  4 18:52:41 2015 quentin demange
** Last update Thu Oct  8 14:41:23 2015 quentin demange
*/

int	 my_put_nbr(int nb)
{
  int	 n;
  int 	 nbrtmp;
  int	 c;

  n = 1;
  if (nb == 0)
    my_putchar(48);
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  nbrtmp = nb;
  while (nbrtmp > 10)
    {
      nbrtmp = nbrtmp / 10;
      n = n * 10;
    }
  while (nb > 0)
    {
      c = nb / n;
      my_putchar(c + 48);
      nb = nb % n;
      n = n / 10;
    }
}
