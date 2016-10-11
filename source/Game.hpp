#ifndef GAME_HPP
#define GAME_HPP

#include <radix/Window.hpp>
#include <radix/renderer/Renderer.hpp>
#include <radix/env/Config.hpp>
#include <radix/BaseGame.hpp>
#include <radix/screen/Screen.hpp>
#include <radix/renderer/ScreenRenderer.hpp>
#include <radix/core/event/EventDispatcher.hpp>
#include "World.hpp"
#include "renderer/GameRenderer.hpp"
#include "renderer/UiRenderer.hpp"
#include "GameController.hpp"

namespace glPortal {

class Game : public radix::BaseGame {
public:
  Game();
  void render();
  void processInput();
private:
  std::unique_ptr<GameController> gameController;
  std::unique_ptr<GameRenderer> gameRenderer;
  std::unique_ptr<UiRenderer> uiRenderer;
  void loadMap();
  void init();
  radix::Config config;
  radix::EventDispatcher::CallbackHolder screenshotCallbackHolder;
};

} /* namespace glPortal */

#endif /* GAME_HPP */
