#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <vector>
#include <string>


class dictionary{
private:
    std::vector<std::string> words;
    void load_words();
public:
    dictionary();
    std::string select_word();
};

#endif