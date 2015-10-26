/*
** my_swap.c for my_swap in /home/demang_q/tests/day04/ex01
** 
** Made by quentin demange
** Login   <demang_q@epitech.net>
** 
** Started on  Thu Oct  1 13:57:23 2015 quentin demange
** Last update Tue Oct 20 11:09:13 2015 quentin demange
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
