/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkulka <jkulka@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:51:30 by jkulka            #+#    #+#             */
/*   Updated: 2023/11/09 22:30:43 by jkulka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" <<
    _amount << ";created" << std::endl;
    _nbAccounts++;
}

Account::~Account()
{
    _nbAccounts--;
    this->_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:"
    << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
    return(_totalNbWithdrawals);
}

void Account::displayStatus() const
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:"
        << this->_amount << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << " " << "accounts:" << getNbAccounts() << ";total:" 
        << getTotalAmount() << ";deposits:"
        << getNbDeposits() << ";withdrawals:" << getNbWithdrawals()
        << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t res = std::time(NULL);
    std::cout << std::setfill('0') << "[" 
        << 1900 + std::localtime(&res)->tm_year
        << std::setw(2) << 1 + std::localtime(&res)->tm_mon 
        << std::setw(2) << std::localtime(&res)->tm_mday
        << "_" << std::setw(2) << std::localtime(&res)->tm_hour 
        << std::setw(2) << std::localtime(&res)->tm_min << std::setw(2) 
        << std::localtime(&res)->tm_sec
        << "]" << std::flush;
}

void Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << " index:" << _accountIndex << ";p_amount:"
        << _amount << std::flush;
    _amount += deposit;
    std::cout << ";deposit:" << deposit << ";amount:" << _amount
    << ";nb_deposits:" << _nbDeposits << std::endl;
}
int Account::checkAmount() const
{
    return _amount;
}

bool Account::makeWithdrawal(int withdrawal)
{
    this->_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:"
        << _amount << ";withdrawal:" << std::flush;
    if(withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:"
        << _nbWithdrawals << std::endl;
    return true;
}