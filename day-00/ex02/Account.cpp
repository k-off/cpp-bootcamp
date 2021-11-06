/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 10:24:22 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 12:42:45 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/* *****************************************************************************
    STATIC MEMBERS INITIALIZATION
***************************************************************************** */

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* *****************************************************************************
    !STATIC MEMBERS INITIALIZATION
***************************************************************************** */

/* *****************************************************************************
    PUBLIC MEMBER FUNCTIONS
***************************************************************************** */

int	Account::getNbAccounts() {
    return Account::_nbAccounts;
}

int	Account::getTotalAmount() {
    return Account::_totalAmount;
}

int	Account::getNbDeposits() {
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals() {
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;    
}

Account::~Account() {
    --_nbAccounts;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
}

/* *****************************************************************************
    !PUBLIC MEMBER FUNCTIONS
***************************************************************************** */

/* *****************************************************************************
    HELPER FUNCTIONS
***************************************************************************** */

void displayStatusHelper(int index, int prevAmount, int delta, 
    int nbDeposits, int nbWithdrawals) {
    std::cout << " index:" << index;
    if (delta)
       std::cout << ";p_amount:" << prevAmount;
    if (delta < 0) {
        std::cout << ";withdrawal:" << -delta;
    }
    if (delta > 0) {
        std::cout << ";deposit:" << delta;
    }
    std::cout << ";amount:" << prevAmount + delta;
    if (delta >= 0) {
        std::cout << (delta? ";nb_deposits:" : ";deposits:") << nbDeposits;
    }
    if (delta <= 0) {
        std::cout << (delta? ";nb_withdrawals:" : ";withdrawals:") << nbWithdrawals;
    }
    std::cout << std::endl;
}

/* *****************************************************************************
    !HELPER FUNCTIONS
***************************************************************************** */

/* *****************************************************************************
    PRIVATE MEMBER FUNCTIONS
***************************************************************************** */

Account::Account ( int initial_deposit ) : 
    _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0),
    _nbWithdrawals(0) {
    ++_nbAccounts;
    _totalAmount +=initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
}

void Account::makeDeposit( int deposit ) {
    if (deposit > 0) {
        ++_totalNbDeposits;
        ++_nbDeposits;
        _displayTimestamp();
        displayStatusHelper(_accountIndex, _amount, deposit, _nbDeposits, _nbWithdrawals);
        _amount += deposit;
        _totalAmount += deposit;
    }
}

bool Account::makeWithdrawal( int withdrawal ) {
    bool ret = false;
    _displayTimestamp();
    if (withdrawal > 0 && withdrawal <= _amount) {
        ++_totalNbWithdrawals;
        ++_nbWithdrawals;
        displayStatusHelper(_accountIndex, _amount, -withdrawal, _nbDeposits, _nbWithdrawals);
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        ret = true;
    } else {
        std::cout << " index:" <<_accountIndex << ";p_amount:" << _amount;
        std::cout << ";withdrawal:refused" << std::endl;
    }
    return ret;
}

int Account::checkAmount() const {
    return _amount;
}

void Account::displayStatus() const {
     _displayTimestamp();
    displayStatusHelper(_accountIndex, _amount, 0, _nbDeposits, _nbWithdrawals);
}

void Account::_displayTimestamp() {
    time_t rawtime;
    struct tm *timeinfo;
    std::string stime(100, '\0');

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(&stime[0], stime.size(), "%Y%m%d_%H%M%S",timeinfo);
    std::cout << "[" << stime << "]";
}

/* *****************************************************************************
    !PRIVATE MEMBER FUNCTIONS
***************************************************************************** */
