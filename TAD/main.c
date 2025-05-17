#include "deck.h"
#include <stdio.h>

int main() {
    card_t deck[52];
    create_deck(deck, 52);

    card_t *current = deck;
    while (current != NULL) {
        printf("Rank: %d, Suit: %s\n", current->rank, printnaip(current->naipes));
        current = current->next;
    }

    return 0;
}
