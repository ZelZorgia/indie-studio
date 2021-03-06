#ifndef						_ESCMENU_HPP_
# define					_ESCMENU_HPP_

#include					<irrlicht.h>
#include					<utility>
#include					<vector>
#include					"EventManager.hpp"

class						EscMenu
{
  int						_height;
  int						_width;
  EventManager					_receiver;
  irr::gui::IGUIEnvironment			*_gui;
  irr::video::ITexture				*_backgroundImage;
  irr::video::IVideoDriver			*_driver;
  std::vector<irr::gui::IGUIButton *>		_button;
  std::vector<irr::video::ITexture *>		_allImages;
  irr::IrrlichtDevice				*_device;

public:
  EscMenu(int width, int height,irr::gui::IGUIEnvironment *gui , irr::video::IVideoDriver *driver, EventManager receiver, irr::IrrlichtDevice *device);
  void						DisplayMenu();
  void						deleteButtonEsc();
  void						deadOne();
  void						deadTwo();
  int						running();
  ~EscMenu();
};

#endif						/* ESC_MENU */
