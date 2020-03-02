/* 
*  Question: Given an array of integers, return indices of the two numbers such that they add up to a specific target.
*  You may assume that each input would have exactly one solution, and you may not use the same element twice.
*  
*  Completed by Connor Kenneally on March 2nd 2020
*/ 

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(int i = 0; i <= nums.size() - 2; i++){
            for(int j = i + 1; j <= nums.size() - 1; j++){
                if(nums[i] + nums[j] == target){
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
        return answer;
    }

int main(){

    vector<int> numbers = {2,7,11,15};
    const int target = 9;
    vector<int> answer;

    answer = twoSum(numbers, target);
    for(int i=0; i < answer.size(); i++){
      std::cout << answer.at(i) << ' ';
    }
      
}