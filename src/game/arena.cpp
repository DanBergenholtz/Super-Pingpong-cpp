#include "game/arena.h"
#include <cmath>
#include <algorithm>
#include <stdexcept>

Arena::Arena(int numberOfPlayers, int height, int width)
    :
      width(width),
      height(height),
      numberOfPlayers(numberOfPlayers){

    setupPlayingField();
}


void Arena::setupPlayingField(){

    sides.clear();

    if (numberOfPlayers < 2 || numberOfPlayers > 6){
        throw std::invalid_argument("Invalid number of players");
    }

    if (numberOfPlayers == 2 || numberOfPlayers == 4){

        // 2 players: floor and ceiling are solid.
        // 4 players: all sides are pass-through.
        int horizontalType = (numberOfPlayers == 2) ? 1 : -1;

        Edge side1(0, 0, width, 0, horizontalType);           // Bottom
        Edge side2(width, 0, width, height, -1);             // Right
        Edge side3(width, height, 0, height, horizontalType); // Top
        Edge side4(0, height, 0, 0, -1);                     // Left

        sides.push_back(side1);
        sides.push_back(side2);
        sides.push_back(side3);
        sides.push_back(side4);
    }

    else if (numberOfPlayers == 3 ||
             numberOfPlayers == 5 ||
             numberOfPlayers == 6){

        // Regular polygon centered in the world.
        constexpr float PI = 3.14159265358979323846f;

        float centerX = width / 2.0f;
        float centerY = height / 2.0f;
        float radius = std::min(width, height) / 2.0f;

        float angleStep = 2.0f * PI / numberOfPlayers;
        float startAngle = PI / 2.0f;

        for (int i = 0; i < numberOfPlayers; i++){

            float angle1 = startAngle + i * angleStep;
            float angle2 = startAngle + (i + 1) * angleStep;

            float x1 = centerX + radius * std::cos(angle1);
            float y1 = centerY + radius * std::sin(angle1);

            float x2 = centerX + radius * std::cos(angle2);
            float y2 = centerY + radius * std::sin(angle2);

            sides.emplace_back(x1, y1, x2, y2, -1);
        }
    }
}
