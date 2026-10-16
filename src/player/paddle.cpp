#include "player/paddle.h"


Paddle::Paddle()
    //these will have to be initiated properly later, 
    //since different paddles will be in different places
    //and oriented differently. Length, thickness and 
    //velocity will be the same initially for all.
    :   
        position(0, 0),
        velocity(0, 0), 
        length(10.f),
        thickness(3.f),
        angle(0.f) //radians
    {       
}

const Vector2D& Paddle::getPosition() const{
    return position;
}

const Vector2D& Paddle::getVelocity() const{
    return velocity;
}

Vector2D Paddle::getTangent() const{
    return Vector2D(std::cos(angle), std::sin(angle)); //radians
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

void Paddle::changeLength(float factor){
    length = length*factor;
}

int Paddle::getLength(){
    return length;
}