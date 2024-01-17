function search(haystack:number[], needle:number){
    for(let i = 0; i < haystack.length; ++i){
        if(haystack[i] == needle){
            return haystack[i] + " is in the haystack.";
        }
    }

    return needle + " is not the haystack."; 
}

let haystack:number[] = [3,9,5,1,2,4,2];
console.log(search(haystack, 5))

//takes Big O(n) runtime