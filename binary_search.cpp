#include <iostream>

int bin_search(int req_arr[], int req_num, int n){ 
    int start_point{};
    int end_point = n;
    while(start_point <= end_point){
        int mid = ((start_point+end_point)/2);
        if (req_arr[mid] == req_num){
            std::cout << "Found at index " << mid << std::endl;
            return mid;
            
        }
        else if (req_arr[mid] > req_num){
            end_point = mid-1;
        }
        else{
            start_point = mid+1;
        }
    }
    return -1;
};

int main(){
    int array[10] = {1,2,4,5,9,12,15,17,19,20};
    bin_search(array, 1, 10);
}