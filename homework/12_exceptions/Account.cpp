/*************************************************************************
 *
 * Homework: Exceptions
 *
 * File Name:   Account.cpp
 * Username:  	?
 * Course:      CPTR 142
 * Date:        ?
 *
 */

#include "Account.h"

// returns new balance or -1 if error
double Account::deposit(double amount) {
  if (amount < 0) { // check for invalid argument
    return -1;
  } else { // normal case
    balance += amount;
  }
  return balance;
}

// returns new balance or -1 if invalid amount
double Account::withdraw(double amount) {
  if (amount < 0 || amount > balance) { // check for invalid argument
    return -1;
  } else { // normal case
    balance -= amount;
  }
  return balance;
}
