#pragma once

#include "cgp/cgp.hpp"
#include "camera.hpp"
#include "cube.hpp"
#include "constants.hpp"

class character {

    float jump_velocity = 5;

public:
    camera_controller_custom* camera;
    cube body;
    cube legs;

    vec3 position;
    vec2 direction;
    vec3 velocity;

    bool is_jumping;

    character(camera_controller_custom&, vec3 center);
    character();

    void move(std::vector<cube>);

    float bottom();
    float top();
};
