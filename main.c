#include "database.h"
#include "term.h"
#include <stdio.h>

int main(int argc, char **argv) {
  sqlite3 *db = initDatabase();

  mainLoop();
  closeDatabase(db);
  return 0;
}
