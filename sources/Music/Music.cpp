#include "Music.hpp"

Music::Music(irrklang::ISoundEngine *engine, const char *path)
  : _engine(engine), _path(path)
{
}

Music::Music(Music const &copy)
  : _path(copy._path)
{
}

Music::~Music()
{
  this->_music->drop();
}

Music			&Music::operator=(Music const &copy)
{
  this->_path = copy._path;
  return (*(this));
}

void			Music::playMusic()
{
  this->_music = this->_engine->play2D(this->_path);
}

irrklang::ISound	*Music::getSound() const
{
  return (this->_music);
}
