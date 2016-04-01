#include <vector>
#include <string>
using namespace std;
class Speakable{
public:
    vector<string> Sentence;
    void addSentence(string _sentence);
    void printSentence();
    Speakable();
};