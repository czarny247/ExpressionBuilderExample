#ifndef PEGASUS_BUILDER_H
#define PEGASUS_BUILDER_H

#include "../HorseBuilderBase.h"
#include "Pegasus.h"

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

#endif //PEGASUS_BUILDER_H