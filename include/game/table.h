#pragma once

class Table{

    public:

        Table(int width, int height, int sides);

        int getHeight();
        int getWidth();

    private:

        int width;
        int height;
        int sides;

};