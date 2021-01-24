#ifndef					_BOMB_HPP_
# define				_BOMB_HPP_
# include				<irrlicht.h>
# include				<vector>
# include				"Map.hpp"
# include				"Character.hpp"

class					Character;

class					Bomb
{
  std::vector<std::pair<irr::scene::IAnimatedMeshSceneNode *, irr::scene::ISceneNodeAnimator *>> _collisionTab;
  irr::core::vector3df			_pos;
  irr::scene::IParticleSystemSceneNode	*_particleSystem;
  irr::scene::IAnimatedMeshSceneNode	*_noded;
  irr::scene::ISceneManager		*_smgr;
  irr::scene::ITriangleSelector		*_selector;
  void					putBomb(irr::scene::IAnimatedMeshSceneNode *node);
  void					setCoor(irr::scene::IAnimatedMeshSceneNode *node);
  void					createCollision(irr::scene::IAnimatedMeshSceneNode *node);
  void					blowDirection(Map &map, unsigned int const bombPower,
						      irr::core::vector3df const &dir,
						      Character *p1, Character *p2);
public:
  Bomb(irr::scene::IAnimatedMeshSceneNode *node, irr::scene::ISceneManager* smgr,
       irr::video::IVideoDriver *driver);
  Bomb();
  void					blowUp(Map &map,
					       unsigned int const bombPower,
					       Character *p1, Character *p2);
  irr::core::vector3df const		&getPos(void) const;
  void					assignCollision(irr::scene::IAnimatedMeshSceneNode *model);
  ~Bomb();
};

#endif					// !BOMB_HPP_
