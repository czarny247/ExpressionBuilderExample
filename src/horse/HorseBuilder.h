#ifndef HORSE_BUILDER_H
#define HORSE_BUILDER_H

#include "Horse.h"
#include "HorseBuilderBase.h"

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

#endif //HORSE_BUILDER_H