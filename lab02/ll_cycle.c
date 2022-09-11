#include "ll_cycle.h"

#include <stddef.h>

int ll_has_cycle(node* head) {
  node* tortoise = head;
  node* hare = head;
  while (hare != NULL) {
    if (hare->next == NULL) return 0;

    tortoise = tortoise->next;
    hare = hare->next->next;
    if (tortoise == hare) return 1;
  }
  return 0;
}