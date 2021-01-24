#include "Character.hpp"
#include "BombUp.hpp"

BombUp::BombUp(irr::scene::ISceneManager *sceneManager,
	       irr::core::vector3df const &pos)
  : APowerUp("BombUp", "media/models/bomb.3DS", sceneManager, pos)
{
}

BombUp::~BombUp()
{
}

bool		BombUp::onCollision(irr::scene::ISceneNodeAnimatorCollisionResponse const &animator)
{
  Character	*character;

  character = Character::getCharacterFromNode(animator.getTargetNode());
  if (character == NULL)
    return (true);
  character->addBomb(1);
  _end = true;
  return (true);
}
