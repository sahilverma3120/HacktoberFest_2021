Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.

class MinStack {
	public:
		stack<int>s;
		multiset<int>m;   

		void push(int val) {//insert elements on both set and stack
			s.push(val); 
			m.insert(val);
		}

		void pop() {//poping elements on both set and stack
			int top = s.top();
			s.pop();
			m.erase(m.find(top)); 
		}

		int top() { //return stack top
			return s.top();
		}

		int getMin() {// return set first element 
			return *m.begin();
		}
	};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
