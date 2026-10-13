#include "game/ball.h"

Ball::Ball()

    : position(0, 0),
      velocity(0, 0), //Set to random later
      radius(5),
      rng(std::random_device{}())
    {       
}

const Vector2D& Ball::getPosition() const{
    return position;
}

const Vector2D& Ball::getVelocity() const{
    return velocity;
}

int Ball::getRadius() const{
    return radius;
}

void Ball::updatePosition(float dt){
    position.addScaled(velocity, dt);
}

void Ball::updateVelocity(float change) {
    velocity.scaleVector(change);
}

void Ball::updateVelocity(const Vector2D& vector2, float change = 1.0f) {
    velocity.addScaled(vector2, change);
}
