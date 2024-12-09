package Threads;

import static java.lang.Thread.sleep;
import java.util.logging.Level;
import java.util.logging.Logger;

class A implements Runnable {

    public void run() {
        for (int i = 0; i < 5; i++) {
            try {
                sleep(500);
            } catch (InterruptedException ex) {
                Logger.getLogger(A.class.getName()).log(Level.SEVERE, null, ex);
            }
            System.out.println("ABCD");
        }
    }
}

class B implements Runnable {

    public void run() {
        for (int i = 0; i < 5; i++) {
            try {
                sleep(500);
            } catch (InterruptedException ex) {
                Logger.getLogger(B.class.getName()).log(Level.SEVERE, null, ex);
            }
            System.out.println("XZ");
        }
    }
}

public class Runnable_Demo1 {

    public static void main(String[] args) {
        A ob = new A();
        B ob2 = new B();
        Thread t1 = new Thread(ob);
        Thread t2 = new Thread(ob2);
        t1.start();
        t2.start();

    }
}
