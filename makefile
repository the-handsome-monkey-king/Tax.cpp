# makefile
#
# @author Ryan Morehouse
# @license MIT

OBJ = Tax.o test.o
DEPS = Tax.o
FLAGS = -Wall
CC = g++
.SUFFIXES: .cpp .o

.cpp.o:
	g++ -o $@ $^ $(FLAGS)

all: $(OBJ)

Tax.o: Tax.cpp
	$(CC) -c -o $@ $< $(FLAGS)

test.o: test.cpp $(DEPS)

clean:
	\rm -f *.o
