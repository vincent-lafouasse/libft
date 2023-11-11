EXEC = tests.out

BUILD_DIR = ./build
SRC_DIR = ./src

SRCS := $(shell find $(SRC_DIR) -name '*.c')
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

LIBS = -lft
LIBS += -lbsd
LDFLAGS = -L..

INC_DIRS = ./src/test-framework
INC_DIRS += ./include
INC_DIRS += ../include
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CC = clang
CFLAGS  = -std=gnu99
CFLAGS += -g3
CFLAGS += -Wall -Wextra
#CFLAGS += -Werror
CFLAGS += $(INC_FLAGS)

CFLAGS += -DUNITY_SUPPORT_64 -DUNITY_OUTPUT_COLOR


.PHONY: test
test: clean run

.PHONY: run
run: build
	@echo
	@echo =============== TEST OUTPUT =============================================
	@./$(BUILD_DIR)/$(EXEC)

.PHONY: build
build: $(BUILD_DIR)/$(EXEC)

# Linking
$(BUILD_DIR)/$(EXEC): $(OBJS)
	@make -C ..
	@echo Linking Test Binary
	@$(CC) $^ -o $@ $(LDFLAGS) $(LIBS)

# Compile C 
$(BUILD_DIR)/%.c.o: %.c
	@echo Compile $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	@echo Cleanup tests
	@$(RM) -r $(BUILD_DIR)

.PHONY: format
format:
	clang-format -i $(shell find $(SRC_DIR) -name '*.c' | grep -v unity)
	clang-format -i $(shell find $(SRC_DIR) -name '*.h' | grep -v unity)

# LSP stuff, don't worry about it
.PHONY: update
update:
	make -C .. clean
	make clean
	mkdir -p $(BUILD_DIR)
	bear --output $(BUILD_DIR)/compile_commands.json -- make -C .. build && make build

.PHONY: t r b f c
t: test
r: run
b: build
f: format
c: clean

