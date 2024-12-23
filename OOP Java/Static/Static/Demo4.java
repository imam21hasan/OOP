package Static;

public class Demo4 {

    static int a = 4;

    static void show() {
        System.out.println("Static-1");
    }

    static void show2() {
        System.out.println("value : " + a);
        show();
        System.out.println("Static-2");
    }

    public static void main(String[] args) {
        Demo4.show2();
    }
}
