/*************************************************************************
 *
 * Exercise: Pointers and Objects
 * 
 * File Name:       BankAccount.h
 * Course:          CPTR 142
 * Date:            February 13, 2019
 * 
 */
// ======================================================================
// ====== DO NOT EDIT == DO NOT EDIT == DO NOT EDIT == DO NOT EDIT ======
// ======================================================================
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>   // for string
using namespace std;

const int INDENT = 17;

// BankAcount maintains basic bank information about an account holder.
class BankAccount {
    public:
        // Constructors
        // Precondition:  The four parameters are of the specified type and newAccoutType is a 's' or 'c'.
        // Postcondition: BankAccount member variables have been assigned the appropriate value.
        BankAccount();
        BankAccount(string newOwnersName, double newBalance, double newInterestRate);
        BankAccount(string newOwnersName, double newBalance, double newInterestRate, char newAccountType);

        // Function: displayAccountSummary
        // Precondition:  BankAccount structure is filled with valid information.
        // Postcondition: Prints the bank summary to the console.
        void displayAccountSummary() const;
        
        // Function: updateInterest
        // Precondition:  BankAccount structure is filled with valid information.
        // Postcondition: Updates the bank account balance with the accured interest.
        //                balance = balance + balance * interestRate
        void updateInterest();
        
        // Function: getOwnersName
        // Precondition:  BankAccount structure is filled with valid information.
        // Postcondition: Returns the bank account owners name.
        string getOwnersName() const {
            return ownersName;
        }

        // STATIC MEMBERS
        // Function: getNextId
        // Precondition:  BankAccount nextAccountId has been initialized.
        // Postcondition: Returns the next account ID and then increments the next id.
        static int getNextId();

    private:
        // Variables
        string ownersName;
        double balance;
        double interestRate;
        char accountType; // s for savings, c for checking.
        // Static members
        static int objectCount;
        static int nextAccountId;
};

#endif // BANKACCOUNT_H
