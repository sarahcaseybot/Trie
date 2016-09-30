#make file for Prog3


OPTS= -c -g -Wall -Werror

testtrie: prog3.o Trie.o Node.o Link.o
	g++ -o testtrie prog3.o Trie.o Link.o Node.o


prog3.o: prog3.cc Trie.h
	g++ $(OPTS) prog3.cc

Node.o: Node.h Node.cc Link.h
	g++ $(OPTS) Node.cc

Link.o: Link.h Link.cc Node.h
	g++ $(OPTS) Link.cc

Trie.o: Trie.h Trie.cc Link.h Node.h
	g++ $(OPTS) Trie.cc

clean:
	rm -f *.o *~