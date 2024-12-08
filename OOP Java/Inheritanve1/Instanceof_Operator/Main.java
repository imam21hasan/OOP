
package Inheritanve1.Instanceof_Operator;

public class Main {
    public static void main(String[] args) {
        Animal a=new Animal();
        Person p=new Person();
        Teacher t=new Teacher();
        
        System.out.println(a instanceof Animal);
        System.out.println(p instanceof Person);
        System.out.println(t instanceof Teacher);
        System.out.println(t instanceof Animal);
        System.out.println(a instanceof Person);
        System.out.println(p instanceof Teacher);
        System.out.println(a instanceof Teacher);
        
    }
}
