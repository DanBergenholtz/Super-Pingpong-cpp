#include "player/paddle.h"

Paddle::Paddle()
    :   
        position(0, 0),
        velocity(0, 0), 
        length(10)
    {       
}

const Vector2D& Paddle::getPosition() const{
    return position;
}

const Vector2D& Paddle::getVelocity() const{
    return velocity;
}

void Paddle::updatePosition(float dt){
    position.addScaled(velocity, dt);
}

void Paddle::updateVelocity(float change) {
    velocity.scaleVector(change);
}

void Paddle::updateVelocity(const Vector2D& vector2, float change) {
    velocity.addScaled(vector2, change);
}

void Paddle::changeLength(int factor){
    length = length*factor;
}

int Paddle::getLength(){
    return length;
}