**12/10-26**

Center of arena will likely not have coordinates (0, 0). That will most likely correspond to a corner

In collisions, bouncable things (walls, paddles) will be defined by their normal vectors. The ball will bounce such that it is reflected in the normal vector. I.e the component of the balls velocity vector which is parallell to the normal vector will flip 180 degrees.

**13/10-26**
Collisions worked out and should be correct. using formula v_new = v_old - 2(v_old dot n)n.
In order for collisions to function, every object with which the ball can collide needs to have a normal vector defined for itself. So paddles and walls need this.
The method creating a normal vector needs to be defined either as (y, -x) or (-y, x).
Paddles will store its center coordinates, its length and its thickness, as well as its orientation angle. The angle allows for the tangent to be calculated (cos(theta), sin(theta)) from which we obtain the normal direction.
Walls will be encoded as their endpoints, to I suspect their angle needs to be stored as well.

The Arena class will define the playing field/"table". The standard setup will be a square/rectangle with two paddles, but I want to implement more players too. With two players, the field is a square with solid floor and ceiling. Three players yields a triangular field with each side belonging to a player. Four players is square with each side belonging to a player etc.

**16/10-26**
Added Arena class and Edge class.
Next time, store the normal and tangent vectors with the Edge objects.