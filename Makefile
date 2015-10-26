##
## Makefile for makefile in /home/demang_q/rendu/Piscine_C_infinadd
## 
## Made by quentin demange
## Login   <demang_q@epitech.net>
## 
## Started on  Mon Oct 19 13:21:52 2015 quentin demange
## Last update Mon Oct 26 17:28:20 2015 quentin demange
##

SRCS	= infin_add.c

COMPILE = gcc -o

LIB	= -lmy -L./lib

HEADER	= -I include

OBJ	= $(SRCS):.c=.o

RM	= rm -f

NAME	= infin_add

all:	$(SRCS) compile $(CLEAR)

compile: 
	$(COMPILE) $(NAME) $(SRCS) $(LIB) $(HEADER)
	$(EXE)

clean:
	$(RM)

fclean: clean

re: fclean
