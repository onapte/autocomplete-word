#ifndef TRIE_H
#define TRIE_H

#include <string>
#include <iostream>
#include <fstream>

class trienode {
public:
    trienode *children[26] = {};
    bool isTerminal = false;
};

class trie {
    trienode *root;
public:
    trie();
    void insert(const std::string &word);
    void autoComplete(const std::string &key);
private:
    void autocomplete(trienode *node, const std::string &prefix);
};

void loadWords(trie &t, const std::string &filename);
void saveWord(const std::string &filename, const std::string &word);

#endif
