#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
	std::cout << "[INIT] Instanciando unidades" << std::endl;
	ClapTrap basic("Basic1");
	ScavTrap defender("Defender1");

	std::cout << "[BASE] Comportamento de ClapTrap" << std::endl;
	basic.attack("Target A");
	basic.takeDamage(5);
	basic.beRepaired(5);

	std::cout << "[GUARD] Comportamento de ScavTrap" << std::endl;
	defender.guardGate();
	defender.attack("Target B");
	defender.takeDamage(25);
	defender.beRepaired(10);

	std::cout << "[LIFECYCLE] Ordem de criacao/destrucao" << std::endl;
	{
		ScavTrap local("LocalScav");
		local.guardGate();
		local.takeDamage(110);
		local.beRepaired(50);
	}
	std::cout << "[INFO] Destruicao reversa (ScavTrap -> ClapTrap base)" << std::endl;

	return 0;
}