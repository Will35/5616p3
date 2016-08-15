// savegame.c
// Compile using `gcc -fno-stack-protector savegame.c` 非保护
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack (2)


struct Hero {
    unsigned int hp;
    char name[10];
    unsigned int gold;
};

int main(int argc, const char *argv[])
{
    struct Hero h;
    h.hp = 30;
    h.gold = 8;
    
    scanf("%s", h.name);
    
    printf("Name: %s\n", h.name);
    printf("HP: %d | Gold: %d\n", h.hp, h.gold);
    int namelen = sizeof(h);
    printf("HP address: %d\n", &h.hp);
    printf("Name address: %d\n", &h.name);
    printf("Gold address: %d\n", &h.gold);
    printf("H length is %d\n", namelen);

    
    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#pragma pack (2)
//
//struct Hero {
//    
//    char name[10];
//    unsigned int gold;
//    unsigned int hp;
//};
//
//int main(int argc, const char *argv[])
//{
//    struct Hero h;
//    h.hp = 30;
//    h.gold = 8;
//    
//    scanf("%s", h.name);
//    int lenth = sizeof(h);
//    printf("the lenth of h is %d\n", &h.name);
//    
//    printf("Name: %s\n", h.name);
//    printf("HP: %d | Gold: %d\n", h.hp, h.gold);
//    
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>

//int main(void)
//{
//    int len = 0;
//    int hp = 30;
//    int gold = 8;
//    char name[10] = {0};
//    
//    scanf("%s", name);
//    
//    printf("HP: %d | Gold: %d\n", hp, gold);
//    len  = strlen(name);
//    printf("\n len of string entered is : [%d]\n", len);
//    
//    
//    return 0;
//}
