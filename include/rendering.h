//=================================
// include guard
#ifndef _rendering_h_
#define _rendering_h_

#include <dependencies/SDL2/SDL.h> 
#include <dependencies/SDL2/SDL_image.h> 


namespace Rendering {

  void initRender();

  // void killRender(entt::registry &registry);

  // void loopRender(entt::registry &registry);

  class Render{
    public:
    static SDL_Window* sdlWindow;
    static SDL_Renderer* sdlRenderer;
  };

}

#endif