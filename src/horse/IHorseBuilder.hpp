#pragma once

#include <memory>

#include "horse/Horse.hpp"

namespace horse
{

class IHorseBuilder
{
public:
	IHorseBuilder();
	virtual ~IHorseBuilder();

	virtual std::shared_ptr<Horse> build() = 0;
};

}

