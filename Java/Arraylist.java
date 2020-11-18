import java.util.ArrayList;
import java.util.Scanner;

public class Arraylist {

	static ArrayList<String> todos= new ArrayList<String>();

	private void addtodos() {
		char ch = 'y';
		
		while(ch=='y'||ch=='Y') {
			System.out.println("enter a new todo: ");
			Scanner sc = new Scanner(System.in);
			String x= null;
			x = sc.nextLine();
			todos.add(x);
			System.out.println("todo added to your work list!!");
			System.out.println("Do you want to enter more todo?(y/n): ");
			ch = sc.next().charAt(0);
		}
		
	}
	
	private void display() {
		for(String x1:todos) {
			System.out.println(x1);
		}
	}
	
	private void deletefun() {
		int x;
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the index for the element to remove(0-"+ (todos.size()-1)+"): ");
		x = sc.nextInt();
		todos.remove(x);
	}
	
	public static void main(String[] args) {
		char x = 'y';
		System.out.println("Welcome to notes\n");
		int f;
		Scanner sc = new Scanner(System.in);
		
		
		
		while(x=='y'||x =='Y') {
			System.out.println("1. Press 1 To Enter a new todo");
			System.out.println("2. Press 2 To display the list");
			System.out.println("3. Press 3 To display the length of the list");
			System.out.println("4. Press 4 to remove from the list");
			System.out.println("enter the work you want to do:\n");
			f = sc.nextInt();
			Arraylist obj = new Arraylist();
			switch(f) {
			case 1:{
				obj.addtodos();
				break;
			}
			case 2:{
				obj.display();
				break;
			}
			
			case 3:{
				System.out.println("the length of the list is: "+ todos.size());
				break;
			}
			case 4:{
				obj.deletefun();
				break;
			}
			}
			System.out.println("want to check anything else?(y/n): ");
			x = sc.next().charAt(0);
		}
	}
}
