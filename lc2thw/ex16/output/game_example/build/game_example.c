// WARNING: this file is auto-generated by the C2 compiler.
// Any changes you make might be lost!


#include "game_example.h"
#include "mygame.h"

static void game_example_example();

static void game_example_example() {
  mygame_Game* g = mygame_Game_create("Final FantasyVII", "JRPG", 1997, 100);
  mygame_Game_print(g);
  mygame_Game_free(g);
}

int32_t main() {
  game_example_example();
  return 0;
}

