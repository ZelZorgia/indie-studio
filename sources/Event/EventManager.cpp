#include "EventManager.hpp"

bool		EventManager::OnEvent(const irr::SEvent &event)
{
  if (event.EventType == irr::EET_KEY_INPUT_EVENT)
    {
      if (event.KeyInput.PressedDown && !KeyIsDown[event.KeyInput.Key])
	KeyIsPressed[event.KeyInput.Key] = true;
      KeyIsDown[event.KeyInput.Key] = event.KeyInput.PressedDown;
    }
  return (false);
}

bool		EventManager::IsKeyPressed(irr::EKEY_CODE keyCode) const
{
  return (KeyIsPressed[keyCode]);
}

bool		EventManager::IsKeyDown(irr::EKEY_CODE keyCode) const
{
  return (KeyIsDown[keyCode]);
}

void		EventManager::resetKeyIsPressed(void)
{
  for (int i = 0; i < irr::KEY_KEY_CODES_COUNT; ++i)
    KeyIsPressed[i] = false;
}

EventManager::EventManager()
{
  for(irr::u32 i = 0; i < irr::KEY_KEY_CODES_COUNT; ++i)
    KeyIsDown[i] = false;
  for (irr::u32 i = 0; i < irr::KEY_KEY_CODES_COUNT; ++i)
    KeyIsPressed[i] = false;
  // irr::u32	i;

  // i = 0;
  // while (i < irr::KEY_KEY_CODES_COUNT)
  //   {
  //     KeyIsDown[i] = false;
  //     ++i;
  //   }
}

EventManager::~EventManager()
{}
