CC = gcc
CFLAGS = -Wall -Wextra -I./src
SRC = src/main.c src/vector.c
OBJ = $(SRC:.c=.o)
TARGET = vector_calculator

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean