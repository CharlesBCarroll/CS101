import java.util.Scanner;
    public class grade {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            double numeric;
            char letter = 0;
            System.out.print("Enter a numeric grade: ");
        numeric = scanner.nextDouble();
        if (numeric >= 90 && numeric <= 100) {
            letter = 'A';
        } else if (numeric >= 80 && numeric <= 89.9) {
            letter = 'B';
        } else if (numeric >= 70 && numeric <= 79.9) {
            letter = 'C';
        } else if (numeric >= 60 && numeric <= 69.9) {
            letter = 'D';
        } else if (numeric >= 0 && numeric <= 59.9) {
            letter = 'F';
        }
        System.out.println("The letter grade is " + letter);
    }
}
/*******************************************************************
* Numeric Grade to Letter Grade *
* *
* PROGRAMMER: Charles Carroll *
* COURSE: CS201 *
* DATE: 8/22/2023 *
* REQUIREMENT: Lab 1 *
* *
* DESCRIPTION: *
* The following program allows the user to enter a numeric grade and will output
the corresponding letter grade using a scale of 100-90=A, descending by 10 every letter
until anything less then 60 is shown as an F.  *
* *
* COPYRIGHT: This code is copyright (C) 2023 Charles Carroll and *
* Dean Zeller. Original c++ code created by Charles Carroll. *
* *
******************************************************************/
