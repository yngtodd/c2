// WARNING: this file is auto-generated by the C2 compiler.
// Any changes you make might be lost!

#ifndef MYGAME_H
#define MYGAME_H

#include "c2types.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct mygame_Game_ mygame_Game;

mygame_Game* mygame_Game_create(unsigned char* name, unsigned char* game_type, int32_t year_created, int32_t rating);
void mygame_Game_print(const mygame_Game* game);
void mygame_Game_free(mygame_Game* game);

#ifdef __cplusplus
}
#endif

#endif
