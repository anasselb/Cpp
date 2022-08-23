/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bach <ael-bach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:35:22 by ael-bach          #+#    #+#             */
/*   Updated: 2022/07/31 16:03:00 by ael-bach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{ 
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void    Account::_displayTimestamp( void )
{
    time_t curr_time;
	curr_time = time(NULL);
	tm *tm_local = localtime(&curr_time);
    std::cout << "[" << tm_local->tm_year + 1900 << tm_local->tm_mon + 1
        << tm_local->tm_mday  << "_" << tm_local->tm_hour << tm_local->tm_min << tm_local->tm_sec <<"] ";
}


void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "account:" << _nbAccounts << ";total:" 
        << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" 
        << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << "index:" << _accountIndex << ";p_amount:" 
        << _amount << ";deposits:" << deposit << ";amount:" << _amount+deposit
        << ";nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
}

int Account::checkAmount( void ) const
{
    return (0);
}

bool    Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" 
            << _amount << ";withdrawal:refused\n";
        return (false);
    }
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" 
        << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal
        << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _amount -= withdrawal;
    return (true);
}

Account::Account( int initial_deposit )
{
    _amount = initial_deposit;
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _nbAccounts << ";amount:" << _amount << ";created\n";
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _nbAccounts - 1 << ";amount:" << _amount << ";closed\n";
    _nbAccounts--;
}