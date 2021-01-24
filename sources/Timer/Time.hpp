#ifndef				TIME_HPP_
# define			TIME_HPP_
# include			<chrono>

namespace			ir
{
  class				Time
  {
  public:
    Time();
    Time(std::chrono::nanoseconds const &time);
    Time(std::chrono::microseconds const &time);
    Time(std::chrono::milliseconds const &time);
    Time(std::chrono::seconds const &time);
    Time			&operator=(std::chrono::nanoseconds const &time);
    Time                        &operator=(std::chrono::microseconds const &time);
    Time                        &operator=(std::chrono::milliseconds const &time);
    Time                        &operator=(std::chrono::seconds const &time);
    long int			asNanoseconds(void) const;
    long int			asMicroseconds(void) const;
    long int			asMilliseconds(void) const;
    long int			asSeconds(void) const;
  private:
    std::chrono::nanoseconds	_time;
  };
}

#endif				// !TIME_HPP_
