EXEC = tests.out

CC = clang
CXX = g++

BUILD_DIR = ./build
SRC_DIR = ./src

SRCS := $(shell find $(SRC_DIR) -name '*.c' -or -name '*.cpp')
SRCS_H = $(SRCS) $(shell find $(SRC_DIR) -name '*.h')
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

LDLIBS = -lgtest -lgtest_main -lpthread
LDLIBS += -lft
LDFLAGS := -L/usr/lib -L/usr/local/lib -L..

CFLAGS  = -std=c99
CFLAGS += -g
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -pedantic
CFLAGS += -Werror
CFLAGS += -Wmissing-declarations
CFLAGS += -I..

CXXFLAGS := -Wall -Wextra -pedantic -std=c++17
CXXFLAGS += -I..

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
	make -C ..
	$(CXX) $^ -o $@ $(LDFLAGS) $(LDLIBS)

# Compile C 
$(BUILD_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Compile CXX
$(BUILD_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	$(RM) -r $(BUILD_DIR)

.PHONY: format
format:
	clang-format -i $(SRCS_H)
