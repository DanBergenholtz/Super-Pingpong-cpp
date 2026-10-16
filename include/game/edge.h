#pragma once
#include "physics/vector.h"

class Edge{

    public:

        Edge(float x1, float y1, float x2, float y2, int type);

    private:

        Vector2D start;
        Vector2D end;
        Vector2D normal;
        Vector2D tangent;
        int type; //solid, pass-through (1, -1)
};