int search1(int*arr,int sz,int val){
    int left = 0;
    int right = sz-1;
    while(left<=right){//左闭右闭区间
        int middle = (right + left)/2;
        if(val>arr[middle]){
            left = middle+1;
        }
        else if(val<arr[middle]){
            right = middle-1;
        }
        else{
            return middle;
        }
    }
    return -1;
}

int search2(int*arr,int sz,int val){
    int left = 0;
    int right = sz;
    while(left<right){//左闭右开区间
        int middle = (right + left)/2;
        if(val>arr[middle]){
            left = middle+1;
        }
        else if(val<arr[middle]){
            right = middle;
        }
        else{
            return middle;
        }
    }
    return -1;
}
//二分查找应用对象为一个有序的数组，且应遵循循环不变量原则，即right和left的赋值应考虑与循环条件相匹配