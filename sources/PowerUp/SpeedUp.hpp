#ifndef			SPEEDUP_HPP_
# define		SPEEDUP_HPP_
# include		<irrlicht.h>
# include		"APowerUp.hpp"

class			SpeedUp : public APowerUp
{
public:
  SpeedUp(irr::scene::ISceneManager *sceneManager, irr::core::vector3df const &pos);
  ~SpeedUp();
  virtual bool		onCollision(const irr::scene::ISceneNodeAnimatorCollisionResponse &animator);
};

#endif			// !SPEEDUP_HPP_
