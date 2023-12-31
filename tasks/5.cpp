//find longest common prefix 
 string longestCommonPrefix(string ar[], int n)
{
    if (n == 0)
        return "";
    if (n == 1)
        return ar[0];
    sort(ar, ar + n);
 
    int en = min(ar[0].size(), 
                 ar[n - 1].size());
 
    string first = ar[0], last = ar[n - 1];
    int i = 0;
    while (i < en && first[i] == last[i])
        i++;

    string pre = first.substr(0, i);
    return pre;
}
 