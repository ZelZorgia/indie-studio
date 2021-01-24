#include "CrossExplo.hpp"

CrossExplo::CrossExplo(irr::IrrlichtDevice *device, irr::core::vector3df const &pos,
		       unsigned int const bombPower)
  : _exploUp(device, pos, irr::core::vector3df(0.0f, 0.0f, 0.6f), bombPower),
    _exploDown(device, pos, irr::core::vector3df(0.0f, 0.0f, -0.6f), bombPower),
    _exploLeft(device, pos, irr::core::vector3df(-0.6f, 0.0f, 0.0f), bombPower),
    _exploRight(device, pos, irr::core::vector3df(0.6f, 0.0f, 0.0f), bombPower)
{
}

CrossExplo::~CrossExplo()
{
}
