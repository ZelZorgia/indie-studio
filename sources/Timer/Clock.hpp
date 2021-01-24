#ifndef							CLOCK_HPP_
# define						CLOCK_HPP_
# include						"Time.hpp"

namespace						ir
{
  class							Clock
  {
  public:
    Clock();
    ~Clock();
    Time						getElapsedTime(void) const;
    Time						restart(void);
  private:
    std::chrono::time_point<std::chrono::steady_clock>	_start;
  };
}

#endif							// !CLOCK_HPP_
