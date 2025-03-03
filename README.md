# Grocery Tracking Program

### Project Summary
This project is a grocery tracking program made for the Corner Grocer to help track how often different items are bought. It reads a file with a list of purchased items, counts how many times each item appears, and gives users different options to see the data. The program allows users to:

* Search for an item and see how many times it was purchased.
* View a list of all items and their purchase counts.
* Display a histogram showing item frequencies using asterisks.
* Save the data in a backup file (frequency.dat).
* The goal is to help the store understand which items are most popular so they can arrange their products better.

### What I Did Well
* Using Maps: I used a map<string, int> to store and count item frequencies, which made searching for items faster.
* File Handling: The program reads from an input file and writes the results to a backup file successfully.
* Organized Code: I kept my code structured by using functions for different tasks.
* User Interaction: The menu system is easy to use and guides the user through the options.

### Areas for Improvement
* Input Validation: I could add better checks to make sure users enter valid inputs.
* Error Handling: Right now, the program doesn’t handle all possible file errors well, so improving that would make it more reliable.
* Sorting the Output: Right now, items appear in a random order. Sorting them alphabetically or by frequency would make it easier to read.
* Optimizing File Reading: For larger files, the program might slow down. Finding a more efficient way to read data could help.
These improvements would make the program work better, be more secure, and handle different situations more smoothly.

### Challenges Faced and Solutions
* File Reading Issues: At first, I had trouble making sure the program correctly read and wrote data to frequency.dat. I fixed this by double-checking how file streams work and testing different file paths.
* Using Maps: I wasn’t very familiar with map<string, int> at first, so I had to read up on how to insert and access values properly.
* Formatting the Histogram: Getting the histogram to line up properly took some trial and error, but testing different output styles helped me get it looking right.
To solve these issues, I used online resources like Stack Overflow, C++ documentation, and my course materials.

### Transferable Skills
* Working with Files: I learned how to read and write files, which is useful for many programming tasks.
* Using Maps for Data Storage: Maps are a great way to store and look up data quickly, which will help in future projects.
* Breaking Code into Functions: I made separate functions for different parts of the program, which makes the code easier to manage.
* Making a Simple User Interface: I got experience designing a menu system that makes it easy for users to interact with the program.
These skills will help me in future programming projects, especially when working with data processing and file management.

### Making the Code Easy to Read and Modify
* Clear Variable Names: I used meaningful names for variables and functions so the code is easier to understand.
* Comments: I added comments to explain what different parts of the code do.
* Using Functions: Instead of putting everything in main(), I split the code into smaller functions, making it easier to change or update later.
* Scalability: The program could be improved in the future by adding more features, like a better sorting system or a graphical interface.
By keeping the code well-organized and documented, it will be easier to improve or expand in the future.
