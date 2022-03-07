#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

#include "dependencies/SDL2/SDL_scancode.h"

#include "input.h"
#include "audio.h"

using namespace Input;

std::string currFile = "7";

namespace Input{

  void MusicFun(){

    std::map<int, int>::iterator it = KeyStates::keycodeStates.begin();
    // std::cout << KeyStates::keycodeStates.size() << std::endl;
    while (it != KeyStates::keycodeStates.end()){

      if(it->second == 1){
        // std::cout << Audio::currentNote << std::endl;
        Audio::currentNote++;
        std::cout << Keybinds::keys[ (SDL_Scancode) it -> first ] << std::endl;
        if(Audio::MeowCtave::octave.find((SDL_Scancode) it -> first) == Audio::MeowCtave::octave.end()){
        } else {
          currFile = Keybinds::keys[ (SDL_Scancode) it -> first ] + "BasicMeow" + Audio::MeowMix[Audio::currentNote%32] + Audio::MeowCtave::octave[ (SDL_Scancode) it -> first ] + ".wav";
        }

        Audio::play((char*) currFile.c_str());
      }
      
      // if( (SDL_Scancode) it->first == SDL_SCANCODE_BACKSPACE && it->second==1){
      //   Audio::closeAllAudioDevices();
      // }

      it++;
    }
  }
}