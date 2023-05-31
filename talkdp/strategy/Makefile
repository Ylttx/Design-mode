EXE := supermarket

all :  $(EXE)

supermarket: supermarket.cpp
	g++ -std=c++11 -Wall -o $@ $^

PHONY: clean

clean:
	rm -rf $(EXE) 