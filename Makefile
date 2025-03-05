NAME=push_swap

CC=cc
CFLAGS=-Wall -Wextra -Werror
TESTER_CFLAGS=-Wall -Wextra -Werror -g -fsanitize=address -fsanitize=undefined

LIBFT_DIR=libft
LIBFT=$(LIBFT_DIR)/libft.a

SRC_DIR=src
STACK_UTILS_SRC_DIR=$(SRC_DIR)/stack_utils

MAIN_SRC=$(SRC_DIR)/main.c
TESTER_SRC=tester.c
SRC=$(SRC_DIR)/push_swap_utils.c \

STACK_UTILS_SRC= $(STACK_UTILS_SRC_DIR)/stack_core_utils.c \
				$(STACK_UTILS_SRC_DIR)/push_ops.c \
				$(STACK_UTILS_SRC_DIR)/swap_ops.c \
				$(STACK_UTILS_SRC_DIR)/rotate_ops.c \
				$(STACK_UTILS_SRC_DIR)/rrotate_ops.c \

OBJ=$(SRC:.c=.o) $(STACK_UTILS_SRC:.c=.o)
MAIN_OBJ=$(MAIN_SRC:.c=.o)
TESTER_OBJ=$(TESTER_SRC:.c=.o)

all: $(NAME)

tester: $(LIBFT) $(OBJ) $(TESTER_OBJ)
	$(CC) $(TESTER_CFLAGS) $(OBJ) $(TESTER_OBJ) $(LIBFT) -o $(NAME)_tester

$(NAME): $(LIBFT) $(OBJ) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MAIN_OBJ) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT): 
	make -C $(LIBFT_DIR) complete

clean:
	rm -f $(OBJ) $(MAIN_OBJ) $(TESTER_OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all