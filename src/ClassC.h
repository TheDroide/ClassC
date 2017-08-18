/*
 * ClassC.h
 *
 * A few useful macros to support
 * object-oriented-programming in C.
 *
 * Note that each file only may contain
 * one class and needs to have CLASS_NAME
 * and OBJ_NAME defined before the inclusion
 * of this header.
 */

#ifndef CLASSC_H_
#define CLASSC_H_
#ifdef CLASS_NAME
#ifdef OBJ_NAME

typedef struct CLASS_NAME* OBJ_NAME;

#define class struct CLASS_NAME

#define declMethod(returnType, name, ...) returnType (*name)(void* this, ## __VA_ARGS__ )

#define implMethod(returnType, name, ...) returnType name(OBJ_NAME this, ## __VA_ARGS__ )

#define constructor(name) OBJ_NAME name()

#define linkThis OBJ_NAME this = (OBJ_NAME) malloc(sizeof(struct CLASS_NAME))

#define linkMethod(name) this->name = &name


#endif
#endif
#endif /* CLASSC_H_ */
