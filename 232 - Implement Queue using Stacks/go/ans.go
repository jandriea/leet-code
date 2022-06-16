type stack []int

func (s stack) Push(v int) stack {
    return append(s, v)
}

func (s stack) Pop() (stack, int) {
    l := len(s)
    return  s[:l-1], s[l-1]
}

type MyQueue struct {
    Array stack
    FirstValue int
}


func Constructor() MyQueue {
    return MyQueue{}
}


func (this *MyQueue) Push(x int)  {
    if len(this.Array) == 0 {
        this.FirstValue = x
    }
    this.Array = this.Array.Push(x)
}


func (this *MyQueue) Pop() int {
    temp := make(stack, 0)
    for len(this.Array) > 0 {
        s, val := this.Array.Pop()
        this.Array = s
        temp = temp.Push(val)
    }
    temp, val := temp.Pop()
    for len(temp) > 0 {
        t, x := temp.Pop()
        temp = t
        if len(this.Array) == 0 {
            this.FirstValue = x
        }
        this.Array = this.Array.Push(x)
    }
    return val
}


func (this *MyQueue) Peek() int {
    return this.FirstValue
}


func (this *MyQueue) Empty() bool {
    return len(this.Array) == 0
}


/**
 * Your MyQueue object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(x);
 * param_2 := obj.Pop();
 * param_3 := obj.Peek();
 * param_4 := obj.Empty();
 */