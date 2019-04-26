#include "horse/Horse.h"
#include "horse/HorseBuilder.h"
#include "horse/HorseBuilderBase.h"
#include "horse/IHorseBuilder.h"
#include "horse/pegasus/Pegasus.h"
#include "horse/pegasus/PegasusBuilder.h"
#include "horse/unicorn/Unicorn.h"
#include "horse/unicorn/UnicornBuilder.h"

#include <iostream>
#include <map>
#include <memory>
#include <vector>

int main()
{
	std::vector<std::shared_ptr<horse::Horse> > stables;

	enum class ProductName
	{
		Horse = 0,
		Unicorn,
		Pegasus
	};

	//director will have this map as an internal storage for builders
	std::map<ProductName, std::shared_ptr<horse::IHorseBuilder> > productNameToBuilderMap;

	productNameToBuilderMap.emplace(ProductName::Horse, std::make_shared<horse::HorseBuilder>());
	productNameToBuilderMap.emplace(ProductName::Unicorn, std::make_shared<horse::unicorn::UnicornBuilder>());
	productNameToBuilderMap.emplace(ProductName::Pegasus, std::make_shared<horse::pegasus::PegasusBuilder>());

	//director will have a function hiding it -> TBuilderType& getBuilder(ProductName productName)
	auto& horseBuilder = *(std::static_pointer_cast<horse::HorseBuilder>(productNameToBuilderMap.at(ProductName::Horse)));

	stables.push_back(
		horseBuilder
			.name("Roach")
			.coatColor(horse::CoatColor::Brown)
			.maneColor(horse::HairColor::Black)
			.tailColor(horse::HairColor::Black)
			.build());

	horse::unicorn::UnicornBuilder unicornBuilder;
	stables.push_back(
		unicornBuilder
			.name("Rainbow Horn")
			.hornColor(horse::unicorn::HornColor::Rainbow)
			.coatColor(horse::CoatColor::Pale)
			.maneColor(horse::HairColor::Pale)
			.tailColor(horse::HairColor::Pale)
			.build());

	horse::pegasus::PegasusBuilder pegasusBuilder;
	stables.push_back(
		pegasusBuilder
			.name("Peggy")
			.wingsType(horse::pegasus::WingsType::Bird)
			.coatColor(horse::CoatColor::Pale)
			.maneColor(horse::HairColor::Grey)
			.tailColor(horse::HairColor::Grey)
			.build());

	for (const auto& horse : stables)
	{
		horse->showInfo();
		std::cout << std::endl;
	}
}