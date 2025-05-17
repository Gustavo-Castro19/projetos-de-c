#include "deck.h"
#include <stdio.h>
#include <stdlib.h>

card_t *create_deck(card_t *deck, int size) {
    if (deck == NULL || size <= 0) {
        return NULL;
    }

    const naip_t pos_naips[4] = {HEARTHS, CLUBS, SPADES, DIAMOND};
    int ite = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= 13; j++) {
            if (ite >= size) {
                break; 
            }
            deck[ite].rank = j;
            deck[ite].naipes = pos_naips[i];
            deck[ite].next = (ite < size - 1) ? &deck[ite + 1] : NULL;
            ite++;
        }
    }

    return deck;
}

char* printnaip(naip_t a_nipe){

  switch(a_nipe){
    case HEARTHS:
      return "de copas";
    case SPADES:
      return "de espadas";
    case DIAMOND:
      return "de ouros";
    case CLUBS:
      return "de paus";
  }
}
