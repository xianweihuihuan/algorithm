int removeElement(int *arr, int n, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == n)
        {
            for (int j = i; j < sz - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            sz--;
        }
    }
    return sz;
}
// 时间复杂度O(n^2),返回值为删除后数组中元素的个数

int removeElement(int *arr, int n, int sz)
{
    int slow = 0;
    int fast = 0;
    while (fast < sz)
    {
        if (arr[fast] != n)
        {
            arr[slow] = arr[fast];
            slow++;
        }
        fast++;
    }
    return slow + 1;
}

// 时间复杂度O(n)