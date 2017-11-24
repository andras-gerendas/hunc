SHELL = /bin/sh
CC = gcc
INC_DIR = ../include
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 -I$(INC_DIR)
LDFLAGS = -shared

TARGET = libhunc.so
SOURCES = $(shell echo src/*.c)
HEADERS = $(shell echo ../include/*.h)
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(TARGET) $(OBJECTS)
