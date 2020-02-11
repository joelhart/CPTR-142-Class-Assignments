/*************************************************************************
 *
 * Homework Assignment: Class for counting words
 *
 * File Name:       BagOfWords.h
 * Name:            hartjo
 * Course:          CPTR 142
 * Date:            2/9
 *
 */
#include <map>
#include <string>

class BagOfWords {
private:
  std::map<std::string, int> count;
  // std::string normalizeWord(std::string);

  int keyCount = 0;
  int uniqueWordCount = 0;

public:
  void addWord(std::string);
  std::string getTopWord();
  int getUniqueWordCount();
  int getWordCount(std::string word);
  // void printWordCount();
};
