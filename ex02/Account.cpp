/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devjorginho <devjorginho@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:56:21 by devjorginho       #+#    #+#             */
/*   Updated: 2025/12/10 15:09:52 by devjorginho      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) :
    _accountIndex(Account::_nbAccounts),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";created" << std::endl;
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";closed" << std::endl;
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
}

int Account::getNbAccounts() {
    return (_nbAccounts);
}

int Account::getTotalAmount() {
    return (_totalAmount);
}

int Account::getNbDeposits() {
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals() {
    return (_totalNbWithdrawals);
}

void Account::_displayTimestamp( void ) {
    std::time_t      tempo_bruto;
    std::tm* info_tempo_local;
    std::time(&tempo_bruto);
    info_tempo_local = std::localtime(&tempo_bruto);
    std::cout << std::setfill('0') << "["
              << info_tempo_local->tm_year + 1900
              << std::setw(2) << info_tempo_local->tm_mon + 1 
              << std::setw(2) << info_tempo_local->tm_mday
              << "_"
              << std::setw(2) << info_tempo_local->tm_hour
              << std::setw(2) << info_tempo_local->tm_min
              << std::setw(2) << info_tempo_local->tm_sec
              << "] ";
}

void Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts
              << ";total:" << Account::_totalAmount
              << ";deposits:" << Account::_totalNbDeposits
              << ";withdrawals:" << Account::_totalNbWithdrawals
              << std::endl;
}

void Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";deposits:" << this->_nbDeposits
              << ";withdrawals:" << this->_nbWithdrawals
              << std::endl;
}

void Account::makeDeposit(int deposit) {
    int p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << p_amount
              << ";deposit:" << deposit
              << ";amount:" << this->_amount
              << ";nb_deposits:" << this->_nbDeposits
              << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    int p_amount = this->_amount;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << p_amount
              << ";withdrawal:";

    if (this->_amount >= withdrawal) {
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        std::cout << withdrawal
                  << ";amount:" << this->_amount
                  << ";nb_withdrawals:" << this->_nbWithdrawals
                  << std::endl;
        return true;
    } else {
        std::cout << "refused" << std::endl;
        return false;
    }
}

int Account::checkAmount( void ) const {
    return (this->_amount);
}