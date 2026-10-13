#include "physics/vector.h"
#include <cmath>

Vector2D::Vector2D(float x, float y)
    :
      x(x),
      y(y)
      {
}

void Vector2D::addVector(const Vector2D& vector2){
    x = x + vector2.getX();;
    y = y + vector2.getY();
}

void Vector2D::subtractVector(const Vector2D& vector2){
    x = x - vector2.getX();
    y = y - vector2.getY();
}

void Vector2D::scaleVector(float scalar){
    x = x*scalar;
    y = y*scalar;
}

void Vector2D::addScaled(const Vector2D& vector2, float scalar){
    x = x + vector2.getX()*scalar;
    y = y + vector2.getY()*scalar;
}

float Vector2D::innerProduct(const Vector2D& vector2) const{
    return x*vector2.getX() + y*vector2.getY();
}

float Vector2D::getLength() const{
    return std::sqrt(x*x + y*y);
}

float Vector2D::getX() const{
    return x;
}

float Vector2D::getY() const{
    return y;
}
