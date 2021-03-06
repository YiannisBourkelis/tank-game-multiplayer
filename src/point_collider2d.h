#ifndef POINT_COLLIDER2D_H
#define POINT_COLLIDER2D_H

#include "collider2d.h"
#include "vector2d.h"

class PointCollider2D : public Collider2D
{
public:
    PointCollider2D(const CollisionRespose collision_response);
    PointCollider2D(Vector2D point, const CollisionRespose collision_response);

    Vector2D point;

    bool operator==(const PointCollider2D& other) const;
};

#endif // POINT_COLLIDER2D_H
