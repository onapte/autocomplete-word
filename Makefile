all: main

main: main.o trie.o
    g++ -o main main.o trie.o

main.o: main.cpp trie.h
    g++ -c main.cpp

trie.o: trie.cpp trie.h
    g++ -c trie.cpp

clean:
    rm -f *.o main
