#ifndef IHORSE_BUILDER_H
#define IHORSE_BUILDER_H

#include "Horse.h"

#include <memory>


namespace horse
{

class IHorseBuilder
{
public:
	IHorseBuilder() = default;
	virtual ~IHorseBuilder() = default;

	virtual std::shared_ptr<Horse> build() = 0;
};

}

#endif //IHORSE_BUILDER_H