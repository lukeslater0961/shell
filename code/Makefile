PROG_NAME = shell

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = main.c \
		user_input.c \
		ft_functions.c \
		loop.c \
		ft_cat.c \
		ft_echo.c \
		ft_exit.c \
		ft_help.c \
		ft_date.c \
		sources.c

OBJS = $(SRCS:.c=.o)

#_____Define colors_____
GREEN = \033[0;32m
NC = \033[0m
YELLOW = \033[1;33m
RED = \033[0;31m
PURPLE = \033[0;35m
CYAN = \033[0;36m
#______________________


#_____MESSAGES_____
define SUCCESS_MESSAGE
	@echo "\n ${RED}[---]${NC} ${YELLOW}[---]${NC} ${GREEN}[---]${NC} ${CYAN}[---]${NC} ${BLUE}[---]${NC} ${PURPLE}[---]${NC}"
	@echo "\n${GREEN}[---]${NC} $@ built successfully! ${GREEN}[---]${NC}\n"
	@echo " ${RED}[---]${NC} ${YELLOW}[---]${NC} ${GREEN}[---]${NC} ${CYAN}[---]${NC} ${BLUE}[---]${NC} ${PURPLE}[---]${NC}"
endef

define SUCCESS_MESSAGE_OBJS
	@echo "${GREEN}[✔]${NC} $@ built successfully!"
endef

define CLEANING_SUCCESS
	@echo "${GREEN}[🧹]${NC} shell cleaned successfully! ${GREEN}[🧹]${NC}"
endef
#__________________

$(PROG_NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(PROG_NAME) $(OBJS)
	@$(call SUCCESS_MESSAGE, $(PROG_NAME))

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@$(call SUCCESS_MESSAGE_OBJS, $@)


clean:
	@rm -f $(OBJS) $(PROG_NAME)
	@$(call CLEANING_SUCCESS)

all: $(PROG_NAME)

.PHONY: clean all
