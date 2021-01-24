#include "Character.hpp"
#include "SpeedUp.hpp"

SpeedUp::SpeedUp(irr::scene::ISceneManager *sceneManager,
		 irr::core::vector3df const &pos)
  : APowerUp("SpeedUp", "media/models/boot.3ds", sceneManager, pos)
{
  _model->setScale(irr::core::vector3df(0.075, 0.075, 0.075));
}

SpeedUp::~SpeedUp()
{
}

bool		SpeedUp::onCollision(irr::scene::ISceneNodeAnimatorCollisionResponse const &animator)
{
  Character	*character;

  if (!(character = Character::getCharacterFromNode(animator.getTargetNode())))
    return (true);
  character->addSpeed(3);
  _end = true;
  return (true);
}
