#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

#include "header.h"

struct ListNode {
  int key;
  ListNode *pNext;
};

/*JZ06从尾到头打印链表*/
void printLinkedlistFromEnd(ListNode *pNode) {
  if (pNode == nullptr) return;
  if (pNode->pNext != nullptr)
    printLinkedlistFromEnd(pNode->pNext);
  cout << pNode->key << endl;
}

/*LC160 */

#endif