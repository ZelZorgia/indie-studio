#include <irrlicht.h>
#include <iostream>
#include "Window.hpp"

int					main(void)
{
  try
    {
      Window				Win;

      Win.running();
    }
  catch (std::exception e)
    {
      std::cout << e.what() << std::endl;
      return (84);
    }
  return (0);
}
