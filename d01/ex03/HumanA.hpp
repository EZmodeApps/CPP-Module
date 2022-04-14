#ifndef CPP_MODULE_01_HUMANA_H
#define CPP_MODULE_01_HUMANA_H

#include "Weapon.hpp"

class HumanA {

	private:
	
		std::string name;
		Weapon &weapon;

	public:

		HumanA(std::string const &name, Weapon& weapon);
		~HumanA();

		void attack();
		void setWeapon(Weapon &weapon);
};

#endif