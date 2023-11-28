LIB = libft.a

CC = clang

SRC_DIR   = ./src
INC_DIR   = .
BUILD_DIR = ./build

LIB_H = $(INC_DIR)/libft.h

MANDATORY_C_FILES = $(shell find $(SRC_DIR) -name '*.c' | grep -v lst)
BONUS_C_FILES = $(shell find $(SRC_DIR) -name '*.c' | grep lst)

MANDATORY_OBJS := $(MANDATORY_C_FILES:%=$(BUILD_DIR)/%.o)
BONUS_OBJS := $(BONUS_C_FILES:%=$(BUILD_DIR)/%.o)
ALL_OBJS = $(MANDATORY_OBJS)
ALL_OBJS += $(BONUS_OBJS)


CFLAGS  = -Wall -Wextra
#CFLAGS += -Werror
CFLAGS += -I$(INC_DIR) 

.PHONY: all
all: build

.PHONY: build
build: $(LIB)

$(LIB): $(MANDATORY_OBJS) $(LIB_H)
	@echo Building libft
	@ar rcs $(LIB) $(MANDATORY_OBJS)
	@printf "$(GREEN)===============BUILD COMPLETED===============$(NC)\n"

.PHONY: bonus
bonus: $(ALL_OBJS) $(LIB_H)
	@echo Building libft
	@ar rcs $(LIB) $(ALL_OBJS)
	@printf "$(GREEN)===============BUILD COMPLETED===============$(NC)\n"

$(BUILD_DIR)/%.c.o: %.c $(LIB_H)
	@echo Compiling $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	@echo Cleaning up object files
	@rm -rf $(BUILD_DIR)

.PHONY: fclean
fclean: clean
	@echo Cleaning up lib
	@rm -rf $(LIB)
	@make -C test clean

.PHONY: re
re: fclean update

.PHONY: test
test: $(LIB)
	@make -C test

.PHONY: fmt
fmt:
	@echo Formatting
	@bash aux/norme.sh

.PHONY: check
check: re
	@python3 -c 'print("-" * 80)'
	@echo SAINTE NORMINETTE SOIS CLEMENTE
	@python3 -c 'print("-" * 80)'
	@echo
	@norminette $(MANDATORY_C_FILES) $(BONUS_C_FILES)
	@echo
	@norminette $(LIB_H)
	@printf "$(GREEN)===============NORME OK===============$(NC)\n"
	@echo
	@cppcheck --language=c $(MANDATORY_C_FILES) $(BONUS_C_FILES)

	@cppcheck --language=c $(LIB_H)
	@printf "$(GREEN)===============CPPCHECK OK===============$(NC)\n"

.PHONY: rendu
rendu:
	bash aux/deliverable_maker.sh
	@make -C rendu

# LSP stuff, don't worry about it
.PHONY: update
update:
	make clean
	mkdir -p $(BUILD_DIR)
	bear --output $(BUILD_DIR)/compile_commands.json -- make build

# aliases
.PHONY: b f c u t
b: build
f: fmt
c: clean
u: update
t: test

GREEN = \033[0;32m
NC = \033[0m
