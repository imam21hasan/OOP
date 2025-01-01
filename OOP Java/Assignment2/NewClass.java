
package Assignment2;

public class NewClass {
    public static void main(String[] args) {
        Employee ob=new Employee();
        ob.name="SAON";
        ob.age=20;
        ob.number="01878******";
        ob.address="2/6 D,Chandpur.";
        ob.salary=35000;
        ob.specialization="Web Development";
        ob.display2();
       
        Manager ob1=new Manager();
        ob1.name="Sadin";
        ob1.age=22;
        ob1.number="01692******";
        ob1.address="36/F,Gazipurpur.";
        ob1.salary=44000;
        ob1.department="CSE";
        ob1.display3();
}
}
