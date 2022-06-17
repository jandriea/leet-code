class ParkingSystem {
public:
    int cap[3];
    
    ParkingSystem(int big, int medium, int small) {
        this->cap[0] = big;
        this->cap[1] = medium;
        this->cap[2] = small;
    }
    
    bool addCar(int carType) {
        if (this->cap[carType - 1] > 0) {
            this->cap[carType - 1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */