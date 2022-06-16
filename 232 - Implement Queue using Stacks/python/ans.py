class MyQueue:

    def __init__(self):
        self.array = []
        self.first_value = -1

    def push(self, x: int) -> None:
        if len(self.array) == 0:
            self.first_value = x
        self.array.append(x)

    def pop(self) -> int:
        temp = list()
        while len(self.array) > 0:
            x = self.array[-1]
            self.array = self.array[:-1]
            temp.append(x)
        ret = temp[-1]
        temp = temp[:-1]
        while len(temp) > 0:
            x = temp[-1]
            temp = temp[:-1]
            if len(self.array) == 0:
                self.first_value = x
            self.array.append(x)
        return ret

    def peek(self) -> int:
        return self.first_value

    def empty(self) -> bool:
        return len(self.array) == 0


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()