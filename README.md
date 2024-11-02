# Autocomplete word using Trie

## Overview

Welcome to the Autocomplete System project! This project implements a simple yet efficient autocomplete feature using a Trie data structure. It's designed to help users quickly find words based on their input, making it a handy tool for text editors, search bars, or any application that requires word prediction.

## Features

- **Autocomplete Suggestions**: As the user types, the system suggests words that start with the entered prefix.
- **Dynamic Dictionary**: Users can add new words to the dictionary directly through the interface.
- **Persistent Storage**: The words are saved in a text file (`wordlist.txt`), so the dictionary persists across sessions.
- **Efficient Search**: The Trie structure allows for fast insertion and search operations, making it suitable for real-time applications.

## Getting Started

### Prerequisites

To run this project, you will need:
- A C++ compiler (like g++).
- Basic knowledge of C++ and command-line operations.

### Installation

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/onapte/autocomplete-word.git
   cd autocomplete-word
2. **Compile the Code**:
   If you have the `Makefile`, simply run:
   ```bash
   make
3. **Run the Program**:
   ```./main```

### Files Included

- `trie.h` and `trie.cpp`: Contains the implementation of the Trie data structure and its methods.
- `main.cpp`: The main program that interacts with the user and utilizes the Trie for autocomplete functionality.
- `wordlist.txt`: The initial dictionary file that holds words for autocompletion. You can populate this file with words before running the program.

## Future Enhancements

- **Graphical User Interface (GUI)**: Consider building a GUI to enhance user experience.
- **Advanced Search Options**: Implement features for searching by suffix or substring.
- **Word Frequency Tracking**: Keep track of how often each word is used to prioritize suggestions.
- **Customizable Dictionary**: Allow users to load or save custom dictionaries.

## Contributing

If you'd like to contribute to this project, feel free to fork the repository and submit a pull request. Whether it’s fixing bugs, improving documentation, or adding features, your contributions are welcome!

## License

This project is open-source and available under the MIT License.
