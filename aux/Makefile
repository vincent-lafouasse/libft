NAME=libft.a

BUILD_DIR=./build

CC = cc
CFLAGS = -Wall -Wextra -Werror

HEADER=libft.h
MANDATORY_C_FILES = ${MANDATORY_C_FILES__}
ALL_C_FILES = $(MANDATORY_C_FILES)
ALL_C_FILES += ${BONUS_C_FILES__}

MANDATORY_OBJS := $(MANDATORY_C_FILES:%=$(BUILD_DIR)/%.o)

ALL_OBJS := $(ALL_C_FILES:%=$(BUILD_DIR)/%.o)

AR = ar
ARFLAGS = rcs

.PHONY: all
all: build

.PHONY: re
re: fclean build

.PHONY: build
build: $(NAME)

$(NAME): $(MANDATORY_OBJS) $(HEADER)
	$(AR) $(ARFLAGS) $@ $(MANDATORY_OBJS)
	@printf "$(GREEN)===============BUILD COMPLETED===============$(NC)\n"

.PHONY: bonus
bonus: $(ALL_OBJS) $(HEADER)
	$(AR) $(ARFLAGS) $(NAME) $(ALL_OBJS)

$(BUILD_DIR)/%.c.o: %.c $(HEADER)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf "$(BUILD_DIR)"

.PHONY: fclean
fclean: clean
	rm -rf "$(NAME)"

GREEN = \033[0;32m
NC = \033[0m
