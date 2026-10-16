#pragma once
#include <vector>
#include "game/edge.h"

class Arena{

    public:

        Arena(int numberOfPlayers, int height, int width);

        const std::vector<Edge>& getSides() const;
        int getHeight();
        int getWidth();

    private:

        void setupPlayingField();
        int width;
        int height;
        int numberOfPlayers;
        std::vector<Edge> sides;
    
};