// Cargo Shipping
// Problem Description
// At a busy airport, a conveyor belt system is used to unload goods from various flights parked at different gates and deliver them to a central warehouse. The conveyor belt network has multiple junctions between the gates and the warehouse. Each junction connects to multiple paths but can only keep one path open at a time. If a new path is opened at a junction, any previously open path is automatically closed.

// The warehouse is also considered a junction; therefore, all locations with multiple incoming paths are referred to as junctions.

// However, there is a limit to how many times a path can be switched at each junction, denoted by K. If a junction exceeds its switching limit, it gets temporarily locked, preventing any further changes to its paths. In this case, the goods from the affected flight must be manually carried to the warehouse, incurring a cost of array[i] rupees for the ith item.

// Example: If Flight A unloads its goods at Gate A, the conveyor is directed through the necessary junctions to connect Gate A to the warehouse. When Flight B at Gate B needs to unload its goods, the conveyor paths at the junctions are adjusted to redirect from Gate B to the warehouse, counting as switches. If the number of switches at any junction exceeds K, the system halts for that junction (i.e., whatever path is opened previously will remain open and cannot be further switched), and the goods must be manually transported.

// Given:

// The conveyor belt network connecting the warehouse to all gates where flights are located.
// A sequence indicating which flight each incoming good is coming from.
// An array representing the cost of manually shifting the ith good to the warehouse when they are stuck.
// Calculate and print the total manual shifting cost.

// Constraints
// 1 <= number of goods <= 50

// 1 <= number of junctions <= 50

// 1 <= length of name of flights and junctions<= 20

// 1 <= K <= 10

// 1 <= Cost of manual shipping of each item to warehouse <= 100

// There will always be a single warehouse.

// There will be only one gate for each flight.

// Name of the junctions and flights will consist of lower-case alphabets and digits.

// Process the given goods sequentially from left to right.

// Irrespective of at which junction the good is struck, the manual cost of traversing the good to the warehouse remains same i.e., as given in the input.

// Input
// The first line contains an integer N, representing the number of lines describing the entire conveyor belt system. These lines will be provided in a random order.
// Each of the following N lines represents a segment of the conveyor structure. Each line follows this format:
// The first element is a string representing a junction ID.
// Subsequent elements are the strings representing connections to other junctions or gates. Remember that paths flow in one direction from gates to the warehouse.
// The next line lists the gate names from which each item originates, separated by spaces.
// The second-to-last line contains an array of integers representing the cost of manually shifting each item to the warehouse when a junction is locked. These costs are separated by spaces.
// The final line contains an integer K, indicating the maximum number of switches allowed at any junction (inclusive).
// Output
// Output the total manual shifting cost required to move all items from all gates to the warehouse.

// Time Limit (secs)
// 1

// Examples
// Example 1

// Input

// 6

// warehouse jun1 jun3

// jun1 jun2

// jun2 jun4 jun6

// jun4 flyhigh

// jun6 jetstream falconflies

// jun3 bharataero

// flyhigh falconflies bharataero jetstream flyhigh bharataero

// 4 2 9 15 7 3

// 2

// Output

// 22

// Explanation

// The given structure looks like below.

// com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@63c12e52:image1.png

// Initially, all paths are closed. Here is an overview of the paths connected to each junction:

// jun4: Path from flyhigh
// jun6: Paths from jetstream and falconflies
// jun2: Paths from jun4 and jun6
// jun1: Path from jun2
// jun3: Path from bharataero
// warehouse: Paths from jun1 and jun3
// Sequence of Operations:

// The first item arrives from flyhigh. To ship it to the warehouse, the following path is opened:
// flyhigh -> jun4 -> jun2 -> jun1 -> warehouse.
// Each junction of this path is switched (or opened) once.
// The next item is from falconflies. The required path is:
// falconflies -> jun6 -> jun2 -> jun1 -> warehouse.
// Each junction is switched. So far, the paths switched are:
// jun4: 1 time
// jun6: 1 time
// jun2: 2 times
// jun1: 1 time
// warehouse: 1 time
// The third item is from bharataero. The path is:
// bharataero -> jun3 -> warehouse.
// Only the paths at jun3 and warehouse needs to be switched.
// jun4: 1 time
// jun6: 1 time
// jun2: 2 times
// jun1: 1 time
// jun3: 1 time
// warehouse: 2 times
// The fourth item is from jetstream. The required path is:
// jetstream -> jun6 -> jun2 -> jun1 -> warehouse.
// The path at warehouse needs to be switched but it has already reached its maximum switching limit. Hence, we need to carry this item manually, which will incur a cost of 15.
// The fifth item arrives from flyhigh. The path is:
// flyhigh -> jun4 -> jun2 -> jun1 -> warehouse.
// But the warehouse has reached its maximum switching limit. This item must also be manually transported, adding a cost of 7.
// The final item is from bharataero. The path is:
// bharataero -> jun3 -> warehouse.
// Since all required paths are already open, no manual shifting is needed.
// Total Manual Shifting Cost is: 15 + 7 = 22. Hence print the same.

// Example 2

// Input

// 4

// warehouse jun1

// jun1 thunderbird jun2 jun3

// jun2 aeronova

// jun3 jetstream starwing

// jetstream starwing aeronova jetstream jetstream thunderbird aeronova jetstream thunderbird aeronova

// 9 6 3 12 15 7 2 6 3 4

// 3

// Output

// 16

// Explanation

// The given structure looks like below.

// com.tcs.cv.automata.ei.middleware.DocxToHtmlConverter@63c12e52:image2.png

// Initially, all paths are closed. Here is an overview of the paths connected to each junction:

// warehouse: path from jun1
// jun1: paths from thunderbird, jun2, and jun3
// jun2: path from aeronova
// jun3: paths from jetstream and starwing
// Sequence of Operations:

// jetstream: To ship the item from jetstream, the path jetstream -> jun3 -> jun1 -> warehouse is opened. Each junction is switched.
// starwing: The item from starwing follows the same path: starwing -> jun3 -> jun1 -> warehouse. All required junctions are switched.
// jun3: 2 times
// jun1: 1 time
// warehouse: 1 time
// aeronova: The item from aeronova takes the path aeronova -> jun2 -> jun1 -> warehouse. Each junction is switched.
// jun3: 2 times
// jun1: 2 times
// warehouse: 1 time
// jun2: 1 time
// jetstream: The next item from jetstream again follows the path jetstream -> jun3 -> jun1 -> warehouse. The junctions are switched as needed.
// jun3: 3 times and
// jun1: 3 times
// jetstream: Another item from jetstream uses the same path. However, the path is already open and nothing else is needed to be switched.
// thunderbird: The item from thunderbird takes the path thunderbird -> jun1 -> warehouse. But the switching limit at jun1 has already reached and cannot be switched. Hence, this item needs to be carried manually which will incur a cost of 7.
// aeronova: Another item from aeronova follows the path aeronova -> jun2 -> jun1 -> warehouse. However, the switching limit for jun1 is reached, so the item is manually transported, incurring a cost of 2.
// jetstream: The next item from jetstream again uses the path jetstream -> jun3 -> jun1 -> warehouse. However, the path is already open and nothing else is needed to be switched.
// thunderbird: For this item to reach the warehouse, the jun1 need to be switched which is impossible, hence manual shifting is required incurring a cost of 3.
// aeronova: For this item to reach the warehouse, the jun1 need to be switched which is impossible, hence manual shifting is required incurring a cost of 4.
// Total Manual Shifting Cost is: 7 + 2 + 3 + 4 = 16. Hence print the same.

// Note: In the second example, the junctions are locked and the maximum number of switches at any junction is 3. As a result, some items are manually transported, which adds up to the total manual shifting cost.
int main(int argc, char **argv) {  
     int result 
     return result;
     
}                                 