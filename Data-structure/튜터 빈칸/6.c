void merge(int list[], int sorted[], int i, int m, int n){
    int j = m+1, k=i, t;

    while(i<=m && j<=n){
        if (list[j]>=list[i])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }
    if(m < i){
        for (t=j; t<=n; t++)
            sorted[k++] = list[t];
    }else{
        for (t=i; t<=n; t++)
            sorted[k++] = list[t];
    }
}