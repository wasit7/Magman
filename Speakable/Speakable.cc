#include "Speakable.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

void Speakable::addSentence(std::string _sentence){
    sentence.push_back(_sentence);
}

void Speakable::printSentence(){
    //srand(time(NULL));
    //int i = rand() % sentence.size();
    std::random_device rd;
    std::mt19937 gen(rd());
    int i = gen() % sentence.size();
    std::cout << sentence[i] << std::endl;
}

Speakable::Speakable(){
    sentence.push_back("NOOB!!");
    sentence.push_back("KAK");
    sentence.push_back("KRIAN");
    sentence.push_back("PUTANG INA MO!");
}