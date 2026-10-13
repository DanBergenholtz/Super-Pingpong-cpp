#include "game/ball.h"
#include "physics/vector.h"

void collision(Ball& ball, const Vector2D& normalVector){
    //normalVector assumed to be normalized to length 1
    Vector2D operand = normalVector;
    float dotProduct = ball.getVelocity().innerProduct(normalVector);
    operand.scaleVector(-2*dotProduct);
    ball.updateVelocity(operand);
}