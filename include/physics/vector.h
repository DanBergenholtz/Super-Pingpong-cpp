#pragma once

class Vector2D{

    public:

        Vector2D(float x, float  y);
        
        void addVector(const Vector2D& vector2);
        void subtractVector(const Vector2D& vector2);
        void scaleVector(float scalar);
        void addScaled(const Vector2D& vector2, float scalar);
        float innerProduct(const Vector2D& vector2) const;
        float getLength() const;
        float getX() const;
        float getY() const;

    private:

        float x;
        float y;

};