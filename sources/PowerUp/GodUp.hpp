#ifndef		GODUP_HPP_
# define	GODUP_HPP_
# include	<irrlicht.h>
# include	"APowerUp.hpp"

class		GodUp : public APowerUp
{
public:
  GodUp(irr::scene::ISceneManager *sceneManager, irr::core::vector3df const &pos);
  ~GodUp();
  virtual bool	onCollision(const irr::scene::ISceneNodeAnimatorCollisionResponse &animator);
};

#endif		// !GODUP_HPP_
