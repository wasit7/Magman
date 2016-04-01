#include <vector>
#include <string>
class Speakable{
public:
    std::vector<std::string> sentence;
    void addSentence(std::string _sentence);
    void printSentence();
    Speakable();
};