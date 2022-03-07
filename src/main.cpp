#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#define SDL_MAIN_HANDLED

#include "rendering.h"
#include "input.h"
#include "audio.h"


using namespace std;
using namespace Input;


int main() {

  cout << "Hello World!" << endl;
  Rendering::initRender();

  Input::initKeyBinds();
  Audio::init();

  Audio::play("assets/BasicMeow.wav");

  int close = 0;

  while (!close) { 

    close = Input::pollEvents();
    Input::MusicFun();
    // Input::updateMouse(registry);
    // System::update(registry);
    // Rendering::loopRender(registry);

  } 

  return 0; 
}
