// WARNING: this file is auto-generated by the C2 compiler.
// Any changes you make might be lost!

#include "stdio.h"
#include "stdlib.h"

#include "mygame.h"

struct mygame_Game_ {
  unsigned char* name;
  unsigned char* game_type;
  int32_t year_created;
  int32_t rating;
};

static void mygame_Game_init(mygame_Game* game, unsigned char* name, unsigned char* game_type, int32_t year_created, int32_t rating);

static void mygame_Game_init(mygame_Game* game, unsigned char* name, unsigned char* game_type, int32_t year_created, int32_t rating) {
  game->name = name;
  game->game_type = game_type;
  game->year_created = year_created;
  game->rating = rating;
}

mygame_Game* mygame_Game_create(unsigned char* name, unsigned char* game_type, int32_t year_created, int32_t rating) {
  mygame_Game* game = malloc(sizeof(mygame_Game));
  mygame_Game_init(game, name, game_type, year_created, rating);
  return game;
}

void mygame_Game_print(const mygame_Game* game) {
  printf("Game: %s\n", game->name);
  printf("\tType: %s\n", game->game_type);
  printf("\tYear created: %d\n", game->year_created);
  printf("\tRating: %d\n", game->rating);
}

void mygame_Game_free(mygame_Game* game) {
  free(game);
}

