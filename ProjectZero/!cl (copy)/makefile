NAME = libft.a

LIST =	ft_atoi			ft_bzero		ft_atoi.c\
		ft_bzero.c		ft_calloc.c		ft_isacii.c\
		ft_isalnum.c	ft_isalpha.c	ft_isdigit.c\
		ft_isprint.c	ft_memccpy.c	ft_memchr.c\
		ft_memcmp.c		ft_memcpy.c		ft_memmove.c\
		ft_memset.c

OBJ = $(pathsubst %.c, %.o, $(LIST))

D_FILES = $(pathsubst %.c, %.d, $(LIST))

OPTFLAGS = -O2

FLAGS = -Wall -Wextra -Werror

all	:	$(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ - MD

include $(wildcard $(D_FILES))

clean	:
	@rm -f $(OBJ) $(D_FILES)

fclean	: clean
	@rm -f $(NAME)

re	: fclean all

.PHONY	: all clean fclean re
