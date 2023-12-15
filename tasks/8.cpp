//remove duplicates from sorted array
class task
{
 public:
  int removeDuplicates(vector<int>& numbers) {
    int n = 0;

    for (const int num : numbers)
      if (n < 1 || num > numbers[n - 1])
        numbers[n++] = num;
    return n;
  }
};