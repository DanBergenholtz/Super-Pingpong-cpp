**12/10-26**

Center of arena will likely not have coordinates (0, 0). That will most likely correspond to a corner

In collisions, bouncable things (walls, paddles) will be defined by their normal vectors. The ball will bounce such that it is reflected in the normal vector. I.e the component of the balls velocity vector which is parallell to the normal vector will flip 180 degrees.

**13/10-26**
Collisions worked out and should be correct. using formula v_new = v_old - 2(v_old dot n)n.
