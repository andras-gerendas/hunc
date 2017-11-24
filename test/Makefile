SHELL = /bin/sh
CC = gcc
LIB = ../lib
LIBS = -L$(LIB) -lhunc
EXE = hunc_test
INC_DIR = ../include
CFLAGS = -Wall -Werror -Wextra -pedantic -ansi -I$(INC_DIR)

TARGET = $(EXE)
SOURCES = $(shell echo src/*.c)
HEADERS = $(shell echo include/*.h)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(FLAGS) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS)
