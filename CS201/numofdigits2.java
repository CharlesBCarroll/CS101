import java.util.Scanner;

public class numofdigits2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int integer;
        int sum = 0;
        System.out.print("Enter an integer: ");
        integer = scanner.nextInt();
        do {
            integer /= 10;
            sum++;
        } while (integer > 0);
        System.out.println("The number of digits is: " + sum);
    }
}
/*******************************************************************
* Number of digits in a number *
* *
* PROGRAMMER: Charles Carroll *
* COURSE: CS201 *
* DATE: 8/22/2023 *
* REQUIREMENT: Lab 1 *
* *
* DESCRIPTION: *
* The following program allows the user to type a number of any size and will 
output the number of digits in the inputed number  *
* *
* COPYRIGHT: This code is copyright (C) 2023 Charles Carroll and *
* Dean Zeller. Original c++ code created by Charles Carroll. *
* *
******************************************************************/
