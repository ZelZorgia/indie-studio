#ifndef					EXPLOSION_HPP_
# define				EXPLOSION_HPP_
# include				<irrlicht.h>

class					Explosion
{
public:
  Explosion(irr::IrrlichtDevice *device, irr::core::vector3df const &pos,
	    irr::core::vector3df const &direction, unsigned int const bombPower);
  ~Explosion();
private:
  irr::scene::IParticleSystemSceneNode	*_particleSystem;
};

#endif					// !EXPLOSION_HPP_
