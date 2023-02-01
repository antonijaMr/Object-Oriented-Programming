#include <iostream>
#include <string>

int main(void)
{
  std::string word1, word2;
  bool i = true;
  while(i){ 
    std::cout << "Insert first word: "; 
    std::cin >> word1;
    std::cout << "Insert secont word: ";
    std::cin >> word2;
    if(word1.size() == word2.size()){
      i = false;
    }else{
      std::cout << "Words must be same size. Try again!" << std::endl;
    }
  }

  int counter = 0;
  for(int i = 0; i < word1.size();++i){
    if(word1[i] != word2[i]){
      ++counter;
    }
  }
  std::cout << "Hammings distance for words " << word1 << " and " << word2 << " is " << counter  << std::endl;
}
