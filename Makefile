# VARIABLES FOR MAKEFILE
# steeing compiler to gcc
CC = gcc   

# setting compiler flags
CFLAGS = -Wall -Wextra -I./src
# -Wall: enables all compiler's warning messages
# -Wextra: enables some extra warning messages
# -I: adds the directory path to search for header files
#./ : current working directory

# setting source files 
SRC = src/main.c src/vector.c

# making every.c file in SRC to .o (ie, object file) 
OBJ = $(SRC:.c=.o)
# kina? yesko dherai reason xa Google gare hunxa


# executable ko final name setting
TARGET = vector_calculator


# RULES FOR MAKEFILE
# all: is the default rule
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean