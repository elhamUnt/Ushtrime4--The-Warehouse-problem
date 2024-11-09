#include <iostream>
#include <string>
using namespace std;
int main() {
    int smallItems, largeItems;
    
    // Define the time required for each type of item
    int smallItemTime = 2;  // 2 minutes for a small item
    int largeItemTime = 6;  // 6 minutes for a large item
    int workdayMinutes = 480; // 8 hours * 60 minutes = 480 minutes

    // Input the number of items in each category
    cout << "Enter the number of small items: ";
    cin >> smallItems;
    cout << "Enter the number of large items: ";
    cin >> largeItems;

    // Calculate the total processing time required
    int totalProcessingTime = (smallItems * smallItemTime) + (largeItems * largeItemTime);
    // Check if the total processing time is within the available workday time
    if (totalProcessingTime <= workdayMinutes) {
        cout << "The worker can process all the items within the available workday." << endl;
    } else {
        cout << "The worker cannot process all the items. Time required: " << totalProcessingTime << " min";
    }
    return 0;
}
