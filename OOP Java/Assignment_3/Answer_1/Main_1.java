package Assignment_3.Answer_1;

import java.util.*;

public class Main_1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int i;
        Student[] arr = new Student[3];

        for (i = 0; i < 3; i++) {
            System.out.print("Enter ID & Score for student-" + (i + 1) + " : ");
            int id = sc.nextInt();
            double score = sc.nextDouble();

            arr[i] = new Student(id, score);
        }

        for (i = 0; i < 3; i++) {
            arr[i].show();
        }
    }
}
