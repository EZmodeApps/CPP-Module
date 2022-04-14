#ifndef CPP_MODULE_01_WEAPON_H
#define CPP_MODULE_01_WEAPON_H

#include <iostream>
#include <string>

class Weapon {

	private:

		std::string type;

	public:
	
		Weapon(std::string const& type);
		Weapon();
		~Weapon();

		std::string const& getType(void);
		void setType(std::string const& type);
};

#endif