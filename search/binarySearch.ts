//it is better to binary search on sorted array
//the wrost case is when the value you are searching is not in the array

function binarySearch(haystack: number[], needle: number):boolean{
    let low = 0;
    let high = haystack.length;

    do{
        const mid = Math.floor(low + (high - low) / 2);
        const value = haystack[mid];
        
        if(value === needle){
            return true;
        }else if(value > needle) {//value is greater than needle which mean that the needle is in the right side of the array
            high = mid;// make the last index the middle of the array since the value is greater than the needle

        }else{//value is less than needle which means it is in the left side
            low = mid;// make the first index the middle of the array since the value is less than the needle

        }

    }while(low < high);
    return false;
}