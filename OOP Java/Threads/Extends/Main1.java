
package Threads.Extends;

public class Main1 {
    public static void main(String[] args) {
        A ob=new A();
        ob.start();
        B ob2=new B();
        ob2.start();          
    }
}
