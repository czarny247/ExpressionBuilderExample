#pragma once

#include "horse/Horse.hpp"

#include "horse/HorseBuilderBase.hpp"

#include <memory>
#include <string>

namespace horse
{

class HorseBuilder : public HorseBuilderBase<HorseBuilder>
{
public:
	HorseBuilder() = default;
	~HorseBuilder();

	std::shared_ptr<Horse> build() override;
};

}
