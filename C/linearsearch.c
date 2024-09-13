#include <stdio.h>


int binary_search(int arr[], int left,int right, int target) {
    while(left<=right){
    int mid=left+(right-left)/2;
     if(arr[mid]==target)
     return mid;
     
    if(arr[mid]<target)
    left=mid+1;
    
    else
    right=mid-1;
    }
    
    return -1;  
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {

        scanf("%d", &arr[i]);
    }
    
    int target;
    printf("Enter the number to search for: ");
    scanf("%d", &target);
    
  
    int result =binary_search(arr,0, n-1, target);
    
    if (result != -1) {
        printf("Element %d found at position %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}

