PROG_NAME = shell

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g 

SRCS = main.c user_input.c ft_functions.c loop.c 
OBJS = $(SRCS:.c=.o)

$(PROG_NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROG_NAME) $(OBJS) 

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(PROG_NAME)

all: $(PROG_NAME)

.PHONY: clean