#include "ll_cycle.h"

#include <stddef.h>

int ll_has_cycle(node* head) {
  node* fast_ptr = head;
  node* slow_ptr = head;

  do {
    if (fast_ptr != NULL && fast_ptr->next != NULL)
      fast_ptr = fast_ptr->next->next;
    else
      return 0;
    slow_ptr = slow_ptr->next;
  } while (fast_ptr != slow_ptr);
  return 1;
}
