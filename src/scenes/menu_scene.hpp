#pragma once

//local
#include "./scene.hpp"

class MenuScene : public Scene
{
public:
    MenuScene();
    ~MenuScene();

    void update(const double delta);
    void update_hud();

};