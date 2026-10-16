#include "game/edge.h"

Edge::Edge(float x1, float y1, float x2, float y2, int type)
    :
      start(x1, y1),
      end(x2, y2),
      type(type),
      normal(Vector2D(x2-x1, y2-y1).getOrthogonal()),
      tangent(Vector2D(x2-x1, y2-y1).getNormalized())
    {
}
