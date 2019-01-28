#pragma once

#include "horse/HorseBuilderBase.hpp"

#include "horse/pegasus/Pegasus.hpp"

namespace horse
{
namespace pegasus
{

class PegasusBuilder : public HorseBuilderBase<PegasusBuilder>
{
public:
	PegasusBuilder() = default;
	~PegasusBuilder();

	PegasusBuilder& wingsType(WingsType wingsType);

	std::shared_ptr<Horse> build() override;

private:
	WingsType wingsType_;
};

}
}

