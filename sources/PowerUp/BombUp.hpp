#ifndef				BOMBUP_HPP_
# define			BOMBUP_HPP_
# include			<irrlicht.h>
# include			"APowerUp.hpp"

class				BombUp : public APowerUp
{
public:
  BombUp(irr::scene::ISceneManager *sceneManager, irr::core::vector3df const &pos);
  ~BombUp();
  virtual bool				onCollision(const irr::scene::ISceneNodeAnimatorCollisionResponse &animator);
};

#endif				// !BOMBUP_HPP_
