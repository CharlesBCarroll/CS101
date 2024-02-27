import java.util.Scanner;
        public class sum2 {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in); {
        System.out.println("Enter 10 numbers and it will produce the sum:");
        int sum = 0;
        int num;
        for (int i = 1; i <= 10; i++) {
            System.out.print("Enter Number: ");
            num = input.nextInt();
            sum += num;
        }
        System.out.println("The sum is: " + sum);
    }
    }
}
/*******************************************************************
* Sum of 10 numbers *
* *
* PROGRAMMER: Charles Carroll *
* COURSE: CS201 *
* DATE: 8/22/2023 *
* REQUIREMENT: Lab 1 *
* *
* DESCRIPTION: *
* The following program takes in 10 numbers and outputs the sum.  *
* *
* COPYRIGHT: This code is copyright (C) 2023 Charles Carroll and *
* Dean Zeller. Original c++ code created by Charles Carroll. *
* *
******************************************************************/
