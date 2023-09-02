LIB = libft.a

CC = clang

SRC_DIR   = ./src
INC_DIR   = .
BUILD_DIR = ./build

LIB_H = $(INC_DIR)/libft.h

C_FILES = $(shell find $(SRC_DIR) -name '*.c')
OBJS := $(C_FILES:%=$(BUILD_DIR)/%.o)

CFLAGS  = -Wall -Wextra -Werror
CFLAGS += -I$(INC_DIR) 

.PHONY: all
all: $(LIB)

$(LIB): $(OBJS) $(LIB_H)
	@echo Building libft
	@ar rcs $(LIB) $(OBJS)

$(BUILD_DIR)/%.c.o: %.c $(LIB_H)
	@echo Compiling $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)

.PHONY: fclean
fclean: clean
	rm -rf $(LIB)

.PHONY: re
re: fclean $(LIB)

.PHONY: test
test: $(LIB)
	make -C test

.PHONY: fmt
fmt:
	bash aux/norme.sh

.PHONY: check
check: re
	@echo
	@python3 -c 'print("-" * 80)'
	@echo SAINTE NORMINETTE SOIS CLEMENTE
	@python3 -c 'print("-" * 80)'
	@echo
	@norminette $(C_FILES)
	@echo
	@norminette $(LIB_H)
