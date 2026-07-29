/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int size = gridSize * gridSize;
    int freq[size + 1];
    for (int i = 0; i <= size; i++)
        freq[i] = 0;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            freq[grid[i][j]]++;
        }
    }
    int *ans = (int*)malloc(2 * sizeof(int));
    for (int i = 1; i <= size; i++) {
        if (freq[i] == 2)
            ans[0] = i;
        if (freq[i] == 0)
            ans[1] = i;
    }
    *returnSize = 2;
    return ans;
}
