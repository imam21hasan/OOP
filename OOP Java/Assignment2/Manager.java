
package Assignment2;

public class Manager extends Member {
    String department;
    void display3()
    {
        display();
        System.out.println("Department : " +department);
        printSalary();
    }
}
