type ParkingSystem struct {
    Cap []int
}


func Constructor(big int, medium int, small int) ParkingSystem {
    return ParkingSystem{Cap: []int{big, medium, small}}
}


func (this *ParkingSystem) AddCar(carType int) bool {
    if this.Cap[carType - 1] > 0 {
        this.Cap[carType - 1] -= 1
        return true
    }
    return false
}


/**
 * Your ParkingSystem object will be instantiated and called as such:
 * obj := Constructor(big, medium, small);
 * param_1 := obj.AddCar(carType);
 */