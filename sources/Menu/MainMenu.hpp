#ifndef				_MAINMENU_HPP_
# define			_MAINMENU_HPP_
# include			<irrlicht.h>
# include			<irrKlang.h>
# include			<vector>
# include			"EventManager.hpp"
# include			"Map.hpp"
# include			"Game.hpp"
# include			"EscMenu.hpp"
# include			"Music.hpp"

class				MainMenu
{
public:
  void				driveGame(int const &);
  void				createButtons();
  bool				running();
  void				deleteButtons();
  void				restart(Map *map, Game *game, EscMenu *Menuesc, int nbPlayers, irrklang::ISoundEngine *engine);
  void				quit(Map *map, Game *game, EscMenu *Menuesc, irrklang::ISoundEngine *engine);
  MainMenu(int const &, int const &, irr::gui::IGUIEnvironment *,
	   irr::video::IVideoDriver *, irr::IrrlichtDevice *device,
	   EventManager &receiver, irr::scene::ISceneManager *sceneManager);
  ~MainMenu();
private:
  int				_height;
  int				_width;
  irr::IrrlichtDevice		*_device;
  irr::video::IVideoDriver	*_driver;
  irr::gui::IGUIEnvironment	*_gui;
  irr::scene::ISceneManager	*_sceneManager;
  irr::video::ITexture		*_backgroundImage;
  EventManager			&_receiver;
  std::vector<irr::gui::IGUIButton *>	_allButtons;
  std::vector<irr::video::ITexture *>	_allImages;
};

#endif		// !MAINMENU_HPP_
