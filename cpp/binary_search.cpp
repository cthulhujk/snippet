#include <iostream>

template<int N>
bool binary_search(int (&arr)[N], int key){
    int low = 0;
    int high = N-1;
    while(low<=high){
        int mid = low+(high-low)/2;

        if(key<arr[mid]){
            high = mid - 1;
        }else if(key>arr[mid]){
            low = mid + 1;
        }else{
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[]) {
    int arr[] = {10,11,12,16,18,23,29,33,48,54,68,77,84,98};
    std::cout<<binary_search(arr,-10)<<" "<<binary_search(arr,23)<<"\n";
    return 0;
}
