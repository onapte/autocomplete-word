#include "trie.h"

trie::trie() : root(new trienode()) {}

void trie::insert(const std::string &word) {
    trienode *node = root;
    for (char c : word) {
        int index = c - 'a';
        if (!node->children[index]) {
            node->children[index] = new trienode();
        }
        node = node->children[index];
    }
    node->isTerminal = true;
}

void trie::autocomplete(trienode *node, const std::string &prefix) {
    if (node->isTerminal) {
        std::cout << prefix << std::endl;
    }
    for (int i = 0; i < 26; i++) {
        if (node->children[i]) {
            autocomplete(node->children[i], prefix + char(i + 'a'));
        }
    }
}

void trie::autoComplete(const std::string &key) {
    trienode *node = root;
    for (char c : key) {
        int index = c - 'a';
        if (!(node = node->children[index])) {
            std::cout << "\n\nNo word found with " << key << " as prefix\n";
            return;
        }
    }
    std::cout << "\nWords containing " << key << " as prefix:\n";
    autocomplete(node, key);
}

void loadWords(trie &t, const std::string &filename) {
    std::ifstream fin(filename);
    std::string word;
    while (getline(fin, word) && !word.empty()) {
        t.insert(word);
    }
}

void saveWord(const std::string &filename, const std::string &word) {
    std::ofstream fout(filename, std::ios::app);
    fout << word << std::endl;
}
