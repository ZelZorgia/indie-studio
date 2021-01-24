#ifndef __MUSIC_HPP__
# define __MUSIC_HPP__

# include <irrKlang.h>
# include <string>

class	Music
{
private:
  irrklang::ISoundEngine	*_engine;
  irrklang::ISound		*_music;
  const char			*_path;

public:
  Music(irrklang::ISoundEngine *, const char *);
  Music(Music const &);
  ~Music();
  Music				&operator=(Music const &);

  void				playMusic();

  irrklang::ISound		*getSound() const;
};

#endif /* !__MUSIC_HPP__ */
