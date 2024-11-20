
int*sortedsquares(int*arr,int sz)
{
    int*ans = (int*)malloc(sz*sizeof(int));
    int left = 0 ;
    int right = sz-1;
    for(int i =sz-1;i>=0;i--){
        int tmpl = arr[left]*arr[left];
        int tmpr = arr[right]*arr[right];
        int tmpm = 0;
        if(tmpr>tmpl){
            tmpm = tmpr;
            right--;
        }else{
            tmpm = tmpl;
            left++;
        }
        ans[i] = tmpm;
    } 
    return ans;
}
