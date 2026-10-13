#pragma once

#include "physics/vector.h"
#include <random>

class Ball{
    public:

        Ball(); //constructor

        const Vector2D& getPosition() const;
        const Vector2D& getVelocity() const;
        void updatePosition(float dt);
        void updateVelocity(float change);
        void updateVelocity(const Vector2D& vector2, float change = 1.0f);
        int getRadius() const;

    private:

        Vector2D position;
        Vector2D velocity;
        int radius;
        std::mt19937 rng; //random number generator
};