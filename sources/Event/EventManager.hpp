#ifndef			EVENTMANAGER_HPP_
# define		EVENTMANAGER_HPP_
# include		<irrlicht.h>

class			EventManager : public irr::IEventReceiver
{
public:
  bool			OnEvent(const irr::SEvent &event);
  bool			IsKeyDown(irr::EKEY_CODE const keyCode) const;
  bool			IsKeyPressed(irr::EKEY_CODE const keyCode) const;
  void			resetKeyIsPressed(void);
  EventManager();
  ~EventManager();
private:
  bool			KeyIsDown[irr::KEY_KEY_CODES_COUNT];
  bool			KeyIsPressed[irr::KEY_KEY_CODES_COUNT];
};

#endif			// !EVENTMANAGER_HPP_
