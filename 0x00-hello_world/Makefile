# the compiler: gcc for C program, define as g++ for C++
CC = gcc

# compiler flags:
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall 

# the build target executable:
TARGET = ${CFILE}
OUTPUT = $(subst .c,.o,$(TARGET))

all: compile

compile:
	$(CC) $(CFLAGS) -o $(OUTPUT) $(TARGET)
clean:
	$(RM) $(OUTPUT)

