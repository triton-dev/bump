/* 
* Próbaképpen egyfajat tron játék
* triton-dev
*
*/


#include <ncurses.h>
#include <unistd.h>

bool palya[40][120];



int main() {

  for(int s=0; s<40; s++) {
		for(int o = 0; o<120; o++) {
			palya[s][o] = FALSE;
		}
	}

	initscr();
	//curs_set(0);
	// raw();
	// keypad(stdscr, TRUE);
	// noecho();
	// nodelay(stdscr, TRUE);

  clear();
  move(0,0);
  for(char c=31; c<256; c++) {
    addch(c);
  }
  mvprintw(10,0,"Kész vagyok.");
  refresh();
  getch();
	endwin();

}

