/*************************************************************************
 *
 * Homework Assignment: Class for counting words
 *
 * File Name:       BagOfWords.h
 * Name:            ?
 * Course:          CPTR 142
 * Date:            ?
 *
 */
#include <map>
#include <string>

class BagOfWords {
private:
  std::map<std::string, int> count;
  //std::string normalizeWord(std::string);

public:
  void addWord(std::string);
  std::string getTopWord();
  int getUniqueWordCount();
  int getWordCount(std::string word);
  //void printWordCount();
};
