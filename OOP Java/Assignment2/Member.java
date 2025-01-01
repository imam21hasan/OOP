
package Assignment2;

public class Member
{
    String name;
    String number;
    String address;
    int age;
    int salary;
    
    void display()
    {
        System.out.println("Name : " +name);
        System.out.println("Age : "+age);
        System.out.println("Phone Number : " +number);
        System.out.println("Address : " +address);
    }
    void printSalary()
    {
        System.out.println("Salary : " +salary);
    }
}

