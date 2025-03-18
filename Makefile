NAME=push_swap
CHECKER_NAME=checker

CC=cc
CFLAGS=-Wall -Wextra -Werror

LIBFT_DIR=libft
LIBFT=$(LIBFT_DIR)/libft.a

SRC_DIR=src
STACK_UTILS_SRC_DIR=$(SRC_DIR)/stack_utils
GNL_DIR=get_next_line

MAIN_SRC=$(SRC_DIR)/main.c

SRC=$(SRC_DIR)/push_swap_utils.c \
		$(SRC_DIR)/args_parser.c \
		$(SRC_DIR)/sorter.c \
		$(SRC_DIR)/short_sorter.c \
		$(SRC_DIR)/sorter_utils.c \

CHECKER_SRC=$(SRC_DIR)/checker_bonus.c

GNL_SRC=$(GNL_DIR)/get_next_line.c \
		$(GNL_DIR)/get_next_line_utils.c

STACK_UTILS_SRC= $(STACK_UTILS_SRC_DIR)/stack_core_utils.c \
				$(STACK_UTILS_SRC_DIR)/push_ops.c \
				$(STACK_UTILS_SRC_DIR)/swap_ops.c \
				$(STACK_UTILS_SRC_DIR)/rotate_ops.c \
				$(STACK_UTILS_SRC_DIR)/rrotate_ops.c \

OBJ=$(SRC:.c=.o) $(STACK_UTILS_SRC:.c=.o)
MAIN_OBJ=$(MAIN_SRC:.c=.o)
CHECKER_OBJ=$(CHECKER_SRC:.c=.o)
GNL_OBJ=$(GNL_SRC:.c=.o)

all: $(NAME)

bonus: $(CHECKER_NAME)

$(NAME): $(LIBFT) $(OBJ) $(MAIN_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MAIN_OBJ) $(LIBFT) -o $(NAME)

$(CHECKER_NAME): $(LIBFT) $(OBJ) $(CHECKER_OBJ) $(GNL_OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(CHECKER_OBJ) $(GNL_OBJ) $(LIBFT) -o $(CHECKER_NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C $(LIBFT_DIR) complete

clean:
	rm -f $(OBJ) $(MAIN_OBJ) $(CHECKER_OBJ) $(GNL_OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(CHECKER_NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all
