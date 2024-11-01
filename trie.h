#ifndef TRIE_H
#define TRIE_H

#include <string>
#include <iostream>
#include <fstream>

class TrieNode {
public:
    TrieNode *children[26] = {};
    bool isTerminal = false;
};

class Trie {
    TrieNode *root;
public:
    Trie();
    void insert(const std::string &word);
    void autoComplete(const std::string &key);
private:
    void autocomplete(TrieNode *node, const std::string &prefix);
};

void loadWords(Trie &t, const std::string &filename);
void saveWord(const std::string &filename, const std::string &word);

#endif
