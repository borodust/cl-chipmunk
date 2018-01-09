#include "../cl_chipmunk.h"


void cpSpaceSetGravityf(cpSpace *space, cpFloat x, cpFloat y) {
  cpSpaceSetGravity(space, cpv(x, y));
}

cpShape* cpSegmentShapeNewf(cpBody *body, cpFloat x0, cpFloat y0,
                            cpFloat x1, cpFloat y1, cpFloat radius) {
  return cpSegmentShapeNew(body, cpv(x0, y0), cpv(x1, y1), radius);
}

cpFloat cpMomentForCirclef(cpFloat m, cpFloat r1, cpFloat r2,
                           cpFloat x, cpFloat y) {
  return cpMomentForCircle(m, r1, r2, cpv(x, y));
}

cpFloat cpMomentForSegmentf(cpFloat m, cpFloat x0, cpFloat y0,
                            cpFloat x1, cpFloat y1, cpFloat radius) {
  return cpMomentForSegment(m, cpv(x0, y0), cpv(x1, y1), radius);
}

void cpBodySetPositionf(cpBody *body, cpFloat x, cpFloat y) {
  cpBodySetPosition(body, cpv(x, y));
}

cpShape* cpCircleShapeNewf(cpBody *body, cpFloat radius, cpFloat x, cpFloat y) {
  return cpCircleShapeNew(body, radius, cpv(x, y));
}

cpFloat* cpBodyGetPositionv(cpBody *body, cpFloat vect[2]) {
  cpVect position = cpBodyGetPosition(body);
  vect[0] = position.x;
  vect[1] = position.y;
  return vect;
}

cpFloat* cpBodyGetVelocityv(cpBody *body, cpFloat vect[2]) {
  cpVect velocity = cpBodyGetVelocity(body);
  vect[0] = velocity.x;
  vect[1] = velocity.y;
  return vect;
}
