#ifndef				_WINDOW_HPP_
# define			_WINDOW_HPP_
# include			<irrlicht.h>
# include			"EventManager.hpp"

class				Window
{
public:
  int				getWidth() const;
  int				getHeight() const;
  void				running();

  Window(int const &width = 1900, int const &height = 1080);
  ~Window();
private:
  int				_height;
  int				_width;
  irr::gui::IGUIEnvironment	*_gui;
  irr::IrrlichtDevice		*_device;
  irr::video::IVideoDriver	*_driver;
  irr::scene::ISceneManager	*_sceneManager;
  EventManager			_receiver;
};

#endif				// !WINDOW_HPP_
