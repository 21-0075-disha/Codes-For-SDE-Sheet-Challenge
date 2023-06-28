int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at+n);
    sort(dt, dt+n);
    int p = 1, totalDept = 0;
    for(int i = 1; i < n; i++) {
        if(at[i] > dt[totalDept]) totalDept++;
        else p++;
    }
    return p;
}
