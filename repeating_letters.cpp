#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<char> repeating_letters(std::vector<std::string>& words){
    bool found = true;
    int n = words.size();
    std::vector<char> repeat;
    for(char c: words[0]){
        for (std::string word: words){
           if(word.find(c)==std::string::npos){
               found = false;
               break;
           }
        }
        if(found){
            repeat.push_back(c);
        }
    }
    std::sort(repeat.begin(), repeat.end());
    return repeat;
}

int main(){
    std::vector<std::string> words;
    std::vector<char> repeat;
    std::string word;

    std::cout << "write your words\n";

    while(std::cin>>word){
        words.push_back(word);
    }
    
    repeat=repeating_letters(words);
    
    std::cout<<"\n";
    
    for(char c: repeat){
        std::cout << c << " ";
    }

    return 0;
}