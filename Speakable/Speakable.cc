#include "Speakable.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Speakable::addSentence(string _sentence){
    Sentence.push_back(_sentence);
}

void Speakable::printSentence(){
    srand(time(NULL));
    int i = rand() % Sentence.size();
    cout << Sentence[i] << endl;
}

Speakable::Speakable(){
    Sentence.push_back("NOOB!!");
    Sentence.push_back("kak");
    Sentence.push_back("krian");
}