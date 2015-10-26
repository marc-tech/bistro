##
## Makefile for tests_Makefile in /home/demang_q/tests/day10
## 
## Made by quentin demange
## Login   <demang_q@epitech.net>
## 
## Started on  Fri Oct  9 10:29:41 2015 quentin demange
## Last update Mon Oct 26 14:58:50 2015 quentin demange
##

SRC	= my_find_prime_sup.c \
	  my_getnbr.c \
	  my_isneg.c \
	  my_is_prime.c \
	  my_power_rec.c \
	  my_putchar.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_revstr.c \
	  my_showmem.c \
	  my_showstr.c \
	  my_sort_int_tab.c \
	  my_square_root.c \
	  my_strcapitalize.c \
	  my_strcat.c \
	  my_strcmp.c \
	  my_strcpy.c \
	  my_str_isalpha.c \
	  my_str_islower.c \
	  my_str_isnum.c \
	  my_str_isprintable.c \
	  my_str_isupper.c \
	  my_strlen.c \
	  my_strlowcase.c \
	  my_strncar.c \
	  my_strncmp.c \
	  my_strncpy.c \
	  my_strstr.c \
	  my_strupcase.c \
	  my_swap.c \
	  nbmax.c \
	  nbmin.c \
	  lenmax.c

NAME	= libmy.a

NAMEMY	= my.h

INCLUDE	= ~/rendu/Piscine_C_infinadd/include

COMPILE	= cc

DEST	= ..

RM	= rm -f

OBJ	= $(SRC:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) $(DEST)
	cp $(NAMEMY) $(INCLUDE)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
