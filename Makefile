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

all: $(LIB)

$(LIB): $(OBJS) $(LIB_H)
	ar rcs $(LIB) $(OBJS)

$(BUILD_DIR)/%.c.o: %.c $(LIB_H)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -rf $(LIB)
