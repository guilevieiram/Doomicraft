#pragma once
#include "cgp/cgp.hpp"
#include "environment.hpp"
#include "cube.hpp"
#include "block.hpp"
#include "utils.hpp"
#include <unordered_map>
#include <functional>

class terrain {

    int generator_function(int x, int y);
    std::unordered_map<utils::Triplet, block, utils::TripletHash> blocks;
    std::vector<cube> cubes;

    std::vector<std::tuple<double, vec2, vec2>> gaussians;


    static const int 
        xmin = -10, 
        xmax =  10, 
        ymin = -10, 
        ymax =  10,
        zmin = -2, 
        zmax =  10;

public:
    terrain();
    ~terrain();
    void draw(const environment_structure&, bool wireframe);
    const std::vector<cube> get_cubes();
};