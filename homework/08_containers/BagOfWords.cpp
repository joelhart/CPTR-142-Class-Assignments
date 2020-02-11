/*************************************************************************
 *
 * Homework Assignment: Class for counting words
 *
 * File Name:       BagOfWords.cpp
 * Name:            hartjo
 * Course:          CPTR 142
 * Date:            2/9
 *
 */

#include "BagOfWords.h"
#include <map>
#include <string>
#include <vector>

using namespace std;

void BagOfWords::addWord(string word) {

  bool isAlNum = false;

  string wordHolder;

  for (int i = 0; i < word.size(); i++) {

    if (isalnum(word.at(i))) {

      isAlNum = true;

      if (isupper(word.at(i))) {

        wordHolder.push_back(tolower(word.at(i)));

      } else {

        wordHolder.push_back(word.at(i));
      }
    }
  }

  if (isAlNum) {

    count.emplace(wordHolder, keyCount);

    count.at(wordHolder)++;

    if (count.at(wordHolder) == 1) {

      uniqueWordCount++;
    }
  }
}

string BagOfWords::getTopWord() {

  string topName;

  int topValue = 0;

  map<string, int>::iterator iter = count.begin();

  while (iter != count.end()) {

    if (iter->second > topValue) {

      topValue = iter->second;

      topName = iter->first;
    }

    iter++;
  }

  return topName;
}

int BagOfWords::getUniqueWordCount() { return uniqueWordCount; }

int BagOfWords::getWordCount(string word) {

  bool isAlNum = false;

  string wordHolder;

  for (int i = 0; i < word.size(); i++) {

    if (isalnum(word.at(i))) {

      isAlNum = true;

      if (isupper(word.at(i))) {

        wordHolder.push_back(tolower(word.at(i)));

      } else {

        wordHolder.push_back(word.at(i));
      }
    }
  }

  if (isAlNum) {

    return count.at(wordHolder);

  } else {

    return 0;
  }
}