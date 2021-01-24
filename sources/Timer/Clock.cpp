#include "Clock.hpp"

namespace	ir
{
  Clock::Clock()
    : _start(std::chrono::steady_clock::now())
  {
  }

  Clock::~Clock()
  {
  }

  Time			Clock::getElapsedTime(void) const
  {
    auto		end(std::chrono::steady_clock::now());
    Time		t(end - _start);

    return (t);
  }

  Time			Clock::restart(void)
  {
    auto		end(std::chrono::steady_clock::now());
    Time		t(end - _start);

    _start = std::chrono::steady_clock::now();
    return (t);
  }
}
