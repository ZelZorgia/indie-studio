#ifndef				_GAME_HPP_
# define			_GAME_HPP_
# include			<irrlicht.h>
# include			<vector>
# include			"Character.hpp"
# include			"Map.hpp"


class				Game
{
public:
  bool				isPlayerDead(unsigned int i) const;
  void				generateMapAndPlayers();
  void				running();

  Game(int const &, int const &, irr::IrrlichtDevice *,
       irr::video::IVideoDriver *, EventManager &,
       Map &, int const &, irr::scene::ISceneManager *);
  ~Game();
private:
  int				_nbPlayers;
  int				_height;
  int				_width;
  Map				&_map;
  irr::IrrlichtDevice		*_device;
  irr::video::IVideoDriver	*_driver;
  irr::scene::ISceneManager	*_sceneManager;
  EventManager			&_receiver;
  std::vector<Character *>	_listPlayers;
};

#endif				// !GAME_HPP_
