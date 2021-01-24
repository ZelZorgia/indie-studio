#ifndef			CROSSEXPLO_HPP_
# define		CROSSEXPLO_HPP_
# include		<irrlicht.h>
# include		"Explosion.hpp"

class			CrossExplo
{
public:
  CrossExplo(irr::IrrlichtDevice *device, irr::core::vector3df const &pos,
	     unsigned int const bombPower);
  ~CrossExplo();
private:
  Explosion		_exploUp;
  Explosion		_exploDown;
  Explosion		_exploLeft;
  Explosion		_exploRight;
};

#endif			// !CROSSEXPLO_HPP_
