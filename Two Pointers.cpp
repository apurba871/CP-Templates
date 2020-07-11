bool twoptrs(vector< int > &v, int sum) {
    int i = 0, j = v.size() - 1;
    while (i < j) {
        if (v[i] + v[j] == sum)
            return true;
        else if (v[i] + v[j] < sum)
            i++;
        else if (v[i] + v[j] > sum)
            j--;
    }
    return false;
}
