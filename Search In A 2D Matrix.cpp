bool searchMatrix(vector<vector<int>> &mat, int target) {

    int row = mat.size(), col = mat[0].size();
    int start = 0, end = row * col - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int elem = mat[mid / col][mid % col];
        if (elem == target)
            return true;
        else if (elem < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return false;
}
