# Define the compiler
CC = gcc
# Define the compilation flags
CFLAGS = -Wall

# Find all .c files in the current directory
SOURCES = $(wildcard *.c)
# Define the output executables (based on the source filenames, but with a .out extension)
EXECUTABLES = $(SOURCES:.c=)

# Default target: compile all .c files
all: $(EXECUTABLES)

# Rule to compile each .c file into a corresponding .out file
%.out: %.c
	$(CC) $(CFLAGS) -lm -o $@ $<

# Clean rule to remove generated .out files
clean:
	rm -f $(EXECUTABLES)
