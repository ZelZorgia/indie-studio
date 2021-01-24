#include "Character.hpp"
#include "GodUp.hpp"

GodUp::GodUp(irr::scene::ISceneManager *sceneManager,
	     irr::core::vector3df const &pos)
  : APowerUp("GodUp", "media/models/shield.3DS", sceneManager, pos)
{
  _model->setScale(irr::core::vector3df(1.2, 1.2, 1.2));
}

GodUp::~GodUp()
{
}

bool		GodUp::onCollision(irr::scene::ISceneNodeAnimatorCollisionResponse const &animator)
{
  Character	*character;

  if (!(character = Character::getCharacterFromNode(animator.getTargetNode())))
    return (true);
  character->addGod(10);
  _end = true;
  return (true);
}
