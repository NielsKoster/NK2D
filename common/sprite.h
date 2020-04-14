#ifndef SPRITE_H
#define SPRITE_H

#include <string>

#include <GL/glew.h>

class Sprite
{
	public:
		Sprite(const std::string& imagepath);
		virtual ~Sprite();

		GLuint texture() { return _texture; };
		GLuint vertexbuffer() { return _vertexbuffer; };
		GLuint uvbuffer() { return _uvbuffer; };

		unsigned int width() { return _width; };
		unsigned int height() { return _height; };
		unsigned int scaleX() { return _scaleX; };
		unsigned int scaleY() { return _scaleY; };
		unsigned int rotation() { return _rotation; };

	private:
		GLuint loadTGA(const std::string& imagepath);

		GLuint _texture;
		GLuint _vertexbuffer;
		GLuint _uvbuffer;

		unsigned int _width;
		unsigned int _height;
		unsigned int _scaleX;
		unsigned int _scaleY;
		unsigned int _rotation;
};

#endif /* SPRITE_H */
