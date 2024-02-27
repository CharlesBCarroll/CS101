import java.util.*;

class example {
    public static void main(String[] args){
        Scanner myObj = new Scanner(System.in);
        System.out.print("Enter name => ");
        String name = myObj.next();
        System.out.println("Username is: " + name);
        System.out.print("Enter your age => ");
        int age = myObj.nextInt();
        System.out.println("You are " +age+ " years old");
    }
}