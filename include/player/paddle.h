#pragma once

#include "physics/vector.h"

class Paddle{
    public:

        Paddle(); //constructor

        const Vector2D& getPosition() const;
        const Vector2D& getVelocity() const;
        Vector2D getTangent() const;
        void updatePosition(float dt);
        void updateVelocity(float change);
        void updateVelocity(const Vector2D& vector2, float change);
        void changeLength(float factor);
        int getLength();

    private:

        Vector2D position; //position of center
        Vector2D velocity;
        float length; 
        float thickness;
        float angle; //radians

};