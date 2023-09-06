#include <iostream>
#include <fstream>
#include <string>

int countWords(const std::string& word, const std::string& txtfile) {
    std::ifstream file(txtfile);
    std::string currentWord;
    int count = 0;

    while (file >> currentWord) {
        if (currentWord == word) {
            count++;
        }
    }

    return count;
}

int main() {
    std::string word;
    std::cout << "Enter word: ";
    std::getline(std::cin, word);

    std::string txtfile = "words.txt";
    int count = countWords(word, txtfile);

    if (count > 0) {
        std::cout <<count<< " word(s) found" << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    return 0;
}