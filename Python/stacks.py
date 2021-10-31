#stack array declaration
stack = [] 
  
# append() function to push 
# element in the stack 
stack.append('a') 
stack.append('b') 
stack.append('c') 
  
print('Initial stack') 
print(stack) 
  
# pop() fucntion to pop 
# element from stack in  
# LIFO(Last In First Order) order 
print('\nElements poped from stack:') 
print(stack.pop()) 
print(stack.pop()) 
print(stack.pop()) 
  
print('\nStack after elements are poped:') 
print(stack) 
  
