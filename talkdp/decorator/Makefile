EXE := decorator

all :  $(EXE)

decorator: decorator.cpp
	g++ -std=c++11 -Wall -o $@ $^

PHONY: clean

clean:
	rm -rf $(EXE) 