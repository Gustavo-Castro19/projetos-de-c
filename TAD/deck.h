#ifndef deck_h
#define deck_h

typedef enum naip naip_t;
typedef struct card card_t;  

typedef enum naip{
  HEARTHS=0,
  CLUBS,
  SPADES,
  DIAMOND
}naip_t;

typedef struct card{
int rank;
naip_t naipes;
card_t *next;
}card_t;


card_t *create_deck(card_t *deck, int size);
char* printnaip(naip_t a_nipe);

#endif 
