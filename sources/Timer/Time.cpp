#include "Time.hpp"

namespace	ir
{
  Time::Time()
  {
  }

  Time::Time(std::chrono::nanoseconds const &time)
    : _time(time)
  {
  }

  Time::Time(std::chrono::microseconds const &time)
    : _time(time)
  {
  }

  Time::Time(std::chrono::milliseconds const &time)
    : _time(time)
  {
  }

  Time::Time(std::chrono::seconds const &time)
    : _time(time)
  {
  }

  Time	&Time::operator=(std::chrono::nanoseconds const &time)
  {
    _time = time;
  }

  Time  &Time::operator=(std::chrono::microseconds const &time)
  {
    _time = time;
  }

  Time  &Time::operator=(std::chrono::milliseconds const &time)
  {
    _time = time;
  }

  Time  &Time::operator=(std::chrono::seconds const &time)
  {
    _time = time;
  }

  long int	Time::asNanoseconds(void) const
  {
    return (_time.count());
  }

  long int	Time::asMicroseconds(void) const
  {
    return (std::chrono::duration_cast<std::chrono::microseconds>(_time).count());
  }

  long int	Time::asMilliseconds(void) const
  {
    return (std::chrono::duration_cast<std::chrono::milliseconds>(_time).count());
  }

  long int	Time::asSeconds(void) const
  {
    return (std::chrono::duration_cast<std::chrono::seconds>(_time).count());
  }
}
