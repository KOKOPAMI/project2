#ifndef _JJUGGUMI_H_
#define _JJUGGUMI_H_

#include <Windows.h>
#include <stdbool.h>

#define PLAYER_MAX		10

typedef struct {
	int id;
	char name[100];

	int intel, str, stamina;

	bool is_alive;
	bool hasitem;
	ITEM item;
} PLAYER;
PLAYER player[PLAYER_MAX];

typedef struct {
	char name[100];
	int intel_buf, str_buf, stamina_buf;
} ITEM;
ITEM item[ITEM_MAX];

/*bool player[PLAYER_MAX]*/;  // 기본값 true, 탈락하면 false
int n_player, n_alive;
int tick;  // 시계

// 미니게임
void sample(void);
//void mugunghwa(void);
//void mugunghwa(void);
//void nightgame(void);
//void juldarigi(void);
//void jebi(void);

int randint(int low, int high);

#endif

