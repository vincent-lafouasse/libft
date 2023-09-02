EXEC = tests.out

CC  = clang
CXX = clang++

BUILD_DIR = ./build
SRC_DIR   = ./src

SRCS  := $(shell find $(SRC_DIR) -name '*.c' -or -name '*.cpp')
SRCS_H = $(SRCS) $(shell find $(SRC_DIR) -name '*.h')
OBJS  := $(SRCS:%=$(BUILD_DIR)/%.o)

LDLIBS   = -lgtest -lgtest_main -lpthread
LDLIBS  += -lft
LDFLAGS := -L/usr/lib -L/usr/local/lib -L..

CFLAGS  = -Wall -Wextra -Werror
CFLAGS += -pedantic -Wmissing-declarations
CFLAGS += -g3
CFLAGS += -I..

CXXFLAGS  = $(CFLAGS) 
CXXFLAGS += -std=c++17

GTESTFLAGS = --gtest_color=yes --gtest_print_time=0

.PHONY: test
test: $(BUILD_DIR)/$(EXEC)
	@echo
	@python3 -c 'print("-" * 80)'
	@echo TEST OUTPUT
	@python3 -c 'print("-" * 80)'
	@echo
	@./$< $(GTESTFLAGS)

# Linking
$(BUILD_DIR)/$(EXEC): $(OBJS)
	@make -s -C ..
	@echo Linking test binary
	@$(CXX) $^ -o $@ $(LDFLAGS) $(LDLIBS)

# Compile C 
$(BUILD_DIR)/%.c.o: %.c
	@echo Compiling $<
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

# Compile CXX
$(BUILD_DIR)/%.cpp.o: %.cpp
	@echo Compiling $<
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	@echo Cleaning up test
	@$(RM) -r $(BUILD_DIR)

.PHONY: fmt
fmt:
	@echo Formatting
	@clang-format -i $(SRCS)
