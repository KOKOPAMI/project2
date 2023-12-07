// 2023-2 고급프로그래밍 과제: 쭈꾸미 게임
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "jjuggumi.h"


#define   DATA_FILE   "jjuggumi.dat"

void intro() {
    printf("   ___    ___  _   _  _____  _____  _   _ ___  ___ _____ \n");
    printf("  |_  |  |_  || | | ||  __  |  __ || | | ||  |/  ||_   _|\n");
    printf("    | |    | || | | || |  / | |  / | | | || .  . |  | |  \n");
    printf("    | |    | || | | || | __ | | __ | | | || |/ | |  | |  \n");
    printf("/|__/ //|__/ /| |_| || |_| || |_| || |_| || |  | | _| |_ \n");
    printf("|____/ |____/ |____/ |____/ |____/ |____/ |_|  |_/|___ / \n");
    Sleep(1000);
}


int jjuggumi_init(void) {
    srand((unsigned int)time(NULL));

    FILE* fp;
    fopen_s(&fp, DATA_FILE, "r");
    if (fp == NULL) {
        return -1;
    }
    fscanf_s(fp, "%d", &n_player);
    for (int i = 0; i < n_player; i++) {
        PLAYER* p = &player[i];

        fscanf_s(fp, "%s%d%d", p->name, (unsigned int)sizeof(p->name), &(p->intel), &(p->str));
        p->stamina = 100;
        p->is_alive = true;
        p->hasitem = false;
    }
    fscanf_s(fp, "%d", &n_item);
    for (int i = 0; i < n_item; i++) {
        fscanf_s(fp, "%s%d%d%d", item[i].name, (unsigned int)sizeof(item[i].name), &(item[i].intel_buf), &(item[i].str_buf), &(item[i].stamina_buf));
    }
    fclose(fp);
    return 0;
}

// low 이상 high 이하 난수를 발생시키는 함수
int randint(int low, int high) {
    int rnum = rand() % (high - low + 1) + low;
    return rnum;
}

int jjuggumi_init(void) {
    srand((unsigned int)time(NULL));

    printf("플레이어 수: ");
    scanf_s("%d", &n_player);

    n_alive = n_player;
    for (int i = 0; i < n_player; i++) {
        player[i] = true;
    }
    return 0;
}

int main(void) {
    jjuggumi_init();
    intro();
    //sample();
    //mugunghwa();
    //nightgame();
    //juldarigi();
    //jebi();
    return 0;
}