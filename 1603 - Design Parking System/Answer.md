## 1603. Design Parking System

The design is quite simple. We just need to store the capacities of each car type and every time we add a car, we reduce the capacity and return True. The add car function will return False when the capacity reaches zero. Because the input car type for add car function is number 1 to 3, we can just use a list to store the capacity and reduce the number of the target car type by accessing the index as the input number 

## Pseudocode
- For the initialization, create a list with the length of 3 to store the Big, Medium, and Small car capacities.
- For the addCar function, we just reduce the number of the capacity using the input value as the index
 