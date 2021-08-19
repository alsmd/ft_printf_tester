#"make m" to mandatory
#"make b" to bonus
#"make" for everything
# You can change $(LIB_SOURCE) to your project's path
FILES = ./utils/check.c ./utils/mcheck.c ./utils/title.c ./utils/redirect.c ./utils/putstr_fd.c ./utils/show_log.c\
		./tests/type_c.c ./tests/type_s.c ./tests/type_p.c ./tests/type_x.c  \
		./tests/type_d.c ./tests/type_i.c  ./tests/type_u.c ./tests/type_%.c

OBJS = $(FILES:.c=.o)

INCLUDES = .

NAME = Tester

LIB_SOURCE = ../

CC = gcc

CFLAGS = -Wno-format-extra-args -Wno-format

RM = rm -f

UNAME = $(shell uname -s)

ifeq ($(UNAME), Linux)
	VALGRIND = valgrind -q --leak-check=full
endif
all: run

$(NAME): make_lib
	$(CC) $(CFLAGS) -D MANDATORY=1 -D BONUS=1 -I.$(LIB_SOURCE) -o $(NAME) ./tests/main.c  $(FILES) -L$(LIB_SOURCE) -lftprintf

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: fclean $(NAME)
	$(VALGRIND) ./$(NAME)

m: make_lib
	$(CC) $(CFLAGS) -D MANDATORY=1 -I.$(LIB_SOURCE) -o $(NAME) ./tests/main.c $(FILES) -L$(LIB_SOURCE) -lftprintf
	$(VALGRIND) ./$(NAME)

b: make_lib
	$(CC) $(CFLAGS) -D BONUS=1 -I.$(LIB_SOURCE) -o $(NAME) ./tests/main.c $(FILES) -L$(LIB_SOURCE) -lftprintf
	$(VALGRIND) ./$(NAME)
make_lib:
	echo "\e[0;33m"
	make -C $(LIB_SOURCE)

.PHONY: run re fclean clean make_lib b m