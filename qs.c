int quicksort_r(int* a,int start,int end){
    if (start>=end) {
        return 0;
    }
    int pivot=a[end];
    int swp;
    int pointer=start;
    int i;
    for (i=start; i<end; i++) {
        if (a[i]<pivot) {
            if (pointer!=i) {
                swp=a[i];
                a[i]=a[pointer];
                a[pointer]=swp;
            }
            pointer++;
        }
    }
    swp=a[end];
    a[end]=a[pointer];
    a[pointer]=swp;
    quicksort_r(a,start,pointer-1);
    quicksort_r(a,pointer+1,end);
    return 0;
}

int quicksort(int*a, int len){
    quicksort_r(a,0,len-1);
    return 0;
}

int main(){
    int a[10]={5, 3, 8, 5, 9, 1, 4, 7, 5, 4};
    int len=10;
    quicksort(a,len);

    /* здесь массив a уже отсортирован */

    return 0;
}
