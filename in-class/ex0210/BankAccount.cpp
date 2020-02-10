/*************************************************************************
 *
 * Exercise: Pointers and Objects
 * 
 * File Name:       BankAccount.cpp
 * Course:          CPTR 142
 * Date:            February 13, 2019
 * 
 */
// ======================================================================
// ====== DO NOT EDIT == DO NOT EDIT == DO NOT EDIT == DO NOT EDIT ======
// ======================================================================
#include <iomanip>  // for setw
#include <iostream> // for cin and cout
#include <stdlib.h> // for exit
#include "BankAccount.h"
using namespace std;

int BankAccount::objectCount = 0;
int BankAccount::nextAccountId = 100;


BankAccount::BankAccount() : BankAccount("Farmer John", 500, .002, 's') {
}


BankAccount::BankAccount(string newOwnersName, double newBalance, double newInterestRate) 
        : ownersName(newOwnersName), balance(newBalance), interestRate(newInterestRate), accountType('s') {
    objectCount++;
}


BankAccount::BankAccount(string newOwnersName, double newBalance, double newInterestRate, char newAccountType) {
    ownersName = newOwnersName;
    balance = newBalance;
    interestRate = newInterestRate;
    accountType = newAccountType;
    if (accountType != 's' && accountType != 'c') {
        cout << "Invalid account type" << endl;
        exit(1);
    }
    objectCount++;
}


void BankAccount::displayAccountSummary() const {
    cout << "Bank Account Summary" << endl;
    cout << "--------------------------------------------" << endl;
    cout << setw(INDENT) << "Owner's Name: " << ownersName << endl;
    cout << setw(INDENT) << "Balance: " << "$" << balance << endl;
    cout << setw(INDENT) << "Interest Rate: " << interestRate << endl;
    cout << setw(INDENT) << "Account Type: " << (accountType == 's' ? "Savings" : "Checking") << endl;
}


void BankAccount::updateInterest() {
    balance *= 1 + interestRate;
}


int BankAccount::getNextId() {
    return nextAccountId++;
}

