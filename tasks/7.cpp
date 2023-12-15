//merge to sorted list
class task
{
 public:
  listNode* TwoSortedLists(listNode* list1, listNode* list2) {
    if (!list1 || !list2)
      return list1 ? list1 : list2;
    if (list1->val > list2->val)
      swap(list1, list2);
    list1->next = TwoSortedLists(list1->next, list2);
    return list1;
  }
}