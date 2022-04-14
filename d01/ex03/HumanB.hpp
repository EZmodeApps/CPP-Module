#ifndef CPP_MODULE_01_HUMANB_H
#define CPP_MODULE_01_HUMANB_H

#include "Weapon.hpp"

class HumanB {

	private:

		std::string name;
		Weapon *weapon;

	public:
	
		HumanB(std::string const& name, Weapon& weapon);
		HumanB(std::string const& name);
		~HumanB();

		void attack();
		void setWeapon(Weapon &weapon);
};

#endif
