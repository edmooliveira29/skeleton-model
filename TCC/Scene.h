#pragma once

#include <GL/glew.h>

class Scene {
	public:
		virtual ~Scene(){};
		virtual void update() = 0;
};
