EXE := main

all :  $(EXE)

$(EXE): $(EXE).cpp
	g++ -std=c++14 -Wall -o $@ $^

PHONY: clean

clean:
	rm -rf $(EXE) 