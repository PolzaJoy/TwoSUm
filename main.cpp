#include <iostream>
using namespace std;
int main() {
    int nums[] = {2, 5, 6 , 8, 3};
    int target = 9;
    for(int i=0; i< size(nums); i++){
        for(int j=0; j< size(nums); j++){
            if(nums[i] + nums[j] == target && i<j){
                cout << "[" <<i << "; " << j << "]" << endl;
            }
        }
    }
    return 0;
}
