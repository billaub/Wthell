CXX=gcc
CXXFLAGS=-std=c99 -Wall -Werror -Wextra -pedantic -g

src=src/main.c

name=wtf

all:
	$(clean)
	$(CXX) $(CXXFLAGS) $(src) -o $(name) 

clean:
	rm -rf .*.swp *.o $(name)
