int slidingwindow(int *arr,int sz,int n){
    int i = 0;
    int sum = 0;
    int ans = 100000;
    for(int j = 0;j<sz;j++){
        sum+=arr[j];
        while(sum>n){
            int tmp = j-i-1;
            ans = (ans<tmp)?ans:tmp;
            sum-=arr[i];
            i++;
        }
    }
    return ans;
}