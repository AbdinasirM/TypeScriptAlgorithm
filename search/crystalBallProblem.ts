//this is sorted
// we jump sqrt of space each time


// Function to find the breaking point in an array of boolean values
function two_crystal_balls(breaks: boolean[]): number {
    // Calculate the jump amount as the square root of the length of the array
    const jumpAmount = Math.floor(Math.sqrt(breaks.length));

    // Initialize the index to start jumping from
    let i = jumpAmount;

    // Loop to perform jumps
    for (; i < breaks.length; i += jumpAmount) {
        // Check if a break has occurred at the current jump position
        if (breaks[i]) {
            // Break if a break is found
            break;
        }
    }

    // Adjust the index after the loop
    i -= jumpAmount;

    // Second loop to narrow down the breaking point within the last jump range
    for (let j = 0; j < jumpAmount && i < breaks.length; ++j) {
        // Check if a break has occurred at the current position
        if (breaks[i]) {
            // Return the index if a break is found
            return i;
        }
    }
}

const testArray = [false, false, false, false, true, false, false, true, false, false, false, false, false, true, false];

console.log(two_crystal_balls(testArray));