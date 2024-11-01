#include "trie.h"

int main() {
    trie t;
    loadWords(t, "wordlist.txt");

    while (true) {
        std::cout << "Enter a word to auto-complete: ";
        std::string key;
        std::cin >> key;
        t.autoComplete(key);

        std::cout << "Add " << key << " to the dictionary? (1: Yes, 2: No): ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            saveWord("wordlist.txt", key);
            t.insert(key);
            std::cout << key << " added successfully.\n";
        }

        std::cout << "Continue? (1: Yes, 2: No): ";
        std::cin >> choice;
        if (choice != 1) break;
    }
    return 0;
}
