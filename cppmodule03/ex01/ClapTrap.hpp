/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:19:02 by wcatwoma          #+#    #+#             */
/*   Updated: 2022/02/03 23:19:05 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
#define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap {

public:

    ClapTrap(std::string name);
    ~ClapTrap();

    void setHitPoints(unsigned int value);
    void setEnergyPoints(unsigned int value);
    void setAttackDamage(unsigned int value);

    std::string	getName(void);
    unsigned int getHitPoints(void);
    unsigned int getEnergyPoints(void);
	unsigned int getAttackDamage(void);

	void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:

    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

};

#endif
