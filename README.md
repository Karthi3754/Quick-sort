📌 Sorting Program in C (QuickSort using qsort)
🚀 Overview
This repository contains a simple C program that reads an array of integers, sorts them in ascending order using the built-in qsort() function, and prints the sorted array.

🛠 How It Works
Reads an integer n (size of the array).
Takes n integer inputs from the user.
Uses qsort() from the C standard library to sort the array in O(n log n) time.
Prints the sorted array.
⏳ Time & Space Complexity
Time Complexity: O(n log n) (due to QuickSort)
Space Complexity: O(log n) (recursion overhead of QuickSort)
🔧 Usage
Compile the program using:
bash
Copy
Edit
gcc sorting.c -o sorting
Run the executable:
bash
Copy
Edit
./sorting
Enter the number of elements followed by the elements:
Copy
Edit
5
3 1 4 1 5
Output:
Copy
Edit
1 1 3 4 5
📂 Files in the Repository
sorting.c → The main C program
🤝 Contributing
Feel free to fork this repo, improve the code, and submit a pull request! 🚀

📜 License
This project is open-source and available under the MIT License.

Happy Coding! 🎯💡
