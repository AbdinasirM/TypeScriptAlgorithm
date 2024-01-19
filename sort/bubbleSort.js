//Bubble Sort is a sorting method where the algorithm repeatedly compares and swaps adjacent elements until the entire list is in order. It's called "bubble" sort because larger elements move to the end of the list, like bubbles rising to the surface. While simple to grasp, it's not very efficient, with a time complexity that can be slow, especially for large lists.
function bubble_sort(anArray: number[]): number[] {
    // Outer loop for each pass through the array
    for (var i = 0; i < anArray.length; ++i) {
        // Inner loop for comparing elements and swapping if necessary
        for (var j = 0; j < anArray.length - 1 - i; ++j) {
            // Compare adjacent elements and swap if they are in the wrong order
            if (anArray[j] > anArray[j + 1]) {
                // Swap elements
                const temp = anArray[j];
                anArray[j] = anArray[j + 1];
                anArray[j + 1] = temp;
            }
        }
    }
    return anArray;
};
// Example usage
let myarr = [5, 9, 1, 3, 4, 7, 6];
console.log(bubble_sort(myarr))

