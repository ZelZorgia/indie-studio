#ifndef				_SPLASHSCREEN_HPP_
# define			_SPLASHSCREEN_HPP_
# include			<irrlicht.h>
# include			<irrKlang.h>
# include			<vector>
# include			"Clock.hpp"
# include			"EventManager.hpp"
# include			"Music.hpp"

class				SplashScreen
{
public:
  void				appear();
  bool				flashing(irr::gui::IGUIInOutFader *);
  
  SplashScreen(int const &, int const &, irr::gui::IGUIEnvironment *,
	       irr::video::IVideoDriver *, irr::IrrlichtDevice *, EventManager &);
  ~SplashScreen();
private:
  int				_height;
  int				_width;
  irr::gui::IGUIEnvironment	*_gui;
  irr::video::IVideoDriver	*_driver;
  irr::IrrlichtDevice		*_device;
  EventManager			&_receiver;
  std::vector<irr::video::ITexture *>	_listImgs;
  ir::Clock				_clock;
  irrklang::ISoundEngine		*_engine;
};

#endif				// !SPLASHSCREEN_HPP_
