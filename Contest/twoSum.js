let arr = [2,5,7,9,3,6,11,45]
let target  = 9;

let left = 0;
let right = arr.length-1;


arr.sort(function(a,b) {return a-b});
 function twoSum(arr,target){
    while(left<right){
        if(arr[left]+arr[right]==target){
            
            return [left,right];
           
        }
        else if(arr[left]+arr[right]>target){
            right--;
        }
        else{
            left++;
        }
    }
    return [];
}


console.log(twoSum(arr,target));



