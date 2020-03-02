/*************************************************************************
 *
 * Nomework: Exceptions
 *
 * File Name:   testAccount.cpp
 * Username:  	hartjo
 * Course:      CPTR 142
 * Date:        3/1/2020
 */
#include "Account.h"
#include <cassert>
#include <iostream> // for cin and cout
using namespace std;

void testAccount() {
  double value;
  Account account(1000);

  cout << "Test 1: account.getBalance() == ";
  value = account.getBalance();
  cout << value << endl;

  cout << "Test 2: account.deposit(-1) == ";
//   value = account.deposit(-1);
//   if (value == -1) {
//   } else {
//     cout << value << endl;
//   }
  try {
      value = account.deposit(-1);
      cout << value << endl;
  } catch (runtime_error &exception) {
      cout << exception.what() << endl;
  }

  cout << "Test 3: account.deposit(500) == ";
//   value = account.deposit(500);
//   if (value == -1) {
//     cout << "ERROR" << endl;
//   } else {
//     cout << value << endl;
//   }
try {
      value = account.deposit(500);
      cout << value << endl;
  } catch (runtime_error &exception) {
      cout << exception.what() << endl;
  }

  cout << "Test 4: account.withdraw(-1) == ";
//   value = account.withdraw(-1);
//   if (value == -1) {
//     cout << "ERROR" << endl;
//   } else {
//     cout << value << endl;
//   }
try {
      value = account.withdraw(-1);
      cout << value << endl;
  } catch (runtime_error &exception) {
      cout << exception.what() << endl;
  }

  cout << "Test 5: account.withdraw(750) == ";
try {
      value = account.withdraw(750);
      cout << value << endl;
  } catch (runtime_error &exception) {
      cout << exception.what() << endl;
  }

  cout << "Test 6: account.withdraw(1750) == ";
try {
      value = account.withdraw(1750);
      cout << value << endl;
  } catch (runtime_error &exception) {
      cout << exception.what() << endl;
  }

  cout << "Test 7: account.getBalance() == ";
  value = account.getBalance();
  cout << value << endl;

  cout << "Finished test run!" << endl;
}
