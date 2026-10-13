#pragma once

#include "physics/vector.h"

class Paddle{
    public:

        Paddle(); //constructor

        const Vector2D& getPosition() const;
        const Vector2D& getVelocity() const;
        void updatePosition(float dt);
        void updateVelocity(float change);
        void updateVelocity(const Vector2D& vector2, float change);
        void changeLength(int factor);
        int getLength();

    private:

        Vector2D position;
        Vector2D velocity;
        int length;
};