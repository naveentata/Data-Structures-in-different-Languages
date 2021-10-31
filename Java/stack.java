import java.util.Stack;  

public class StackEmptyMethodExample  
  {  
//   Driver Function starts
    public static void main(String[] args)   
      {  
      
          Stack<Integer> stk= new Stack<>();  
          boolean result = stk.empty();  
          
          System.out.println("Is the stack empty? " + result);  
          
          // pushing elements into stack  
          stk.push(78);  
          stk.push(113);  
          stk.push(90);  
          stk.push(120);  
          
          //prints elements of the stack  
          System.out.println("Elements in Stack: " + stk);  
          result = stk.empty();  
          
          System.out.println("Is the stack empty? " + result);  
    }  
}  
