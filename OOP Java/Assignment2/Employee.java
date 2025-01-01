
package Assignment2;

public class Employee extends Member {
    String specialization;
    void display2()
    {
        display();
        System.out.println("Specialization : " +specialization);
        printSalary();
    }
}
