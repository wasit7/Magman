#include "Speakable.h"
#include <iostream>
#include <random>

void Speakable::addSentence(std::string _sentence){
    sentence.push_back(_sentence);
}

void Speakable::printSentence(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::cout << sentence[gen() % sentence.size()] << std::endl;
}

Speakable::Speakable(){
    sentence.push_back("NOOB!!");
    sentence.push_back("KAK!!");
    sentence.push_back("KRIAN!!");
    sentence.push_back("If you're not with me, then you're my enemy.");
    sentence.push_back("You Underestimate My Power!!");
    sentence.push_back("The force is strong with this one.");
    sentence.push_back("I am your Father.");
    sentence.push_back("Execute order 66.");
    sentence.push_back("And now, young Skywalker... you will die.");
    sentence.push_back("Are you going to kill me?");
}
