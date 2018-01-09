#ifndef _CL_CHIPMUNK_H_
#define _CL_CHIPMUNK_H_

#include <chipmunk/chipmunk.h>

#ifdef _WIN32
#define CL_API extern
#else
#define CL_API
#endif

CL_API void cpSpaceSetGravityf(cpSpace *space, cpFloat x, cpFloat y);

CL_API cpShape* cpSegmentShapeNewf(cpBody *body, cpFloat x0, cpFloat y0,
                                   cpFloat x1, cpFloat y1, cpFloat radius);

CL_API cpFloat cpMomentForCirclef(cpFloat m, cpFloat r1, cpFloat r2,
                                  cpFloat x, cpFloat y);

CL_API cpFloat cpMomentForSegmentf(cpFloat m, cpFloat x0, cpFloat y0,
                                   cpFloat x1, cpFloat y1, cpFloat radius);

CL_API void cpBodySetPositionf(cpBody *body, cpFloat x, cpFloat y);

CL_API cpShape* cpCircleShapeNewf(cpBody *body, cpFloat radius, cpFloat x, cpFloat y);

CL_API cpFloat* cpBodyGetPositionv(cpBody *body, cpFloat[2]);

CL_API cpFloat* cpBodyGetVelocityv(cpBody *body, cpFloat[2]);

#endif /* _CL_CHIPMUNK_H_ */
