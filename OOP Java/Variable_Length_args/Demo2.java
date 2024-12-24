package Variable_Length_args;

public class Demo2 {

    private int a, b;
    private String name;

    public Demo2(int a, int b, String name) {
        this.a = a;
        this.b = b;
        this.name = name;
        System.out.println(a + "\t" + b + name);
    }

    public static void main(String[] args) {
        Demo2 ob = new Demo2(10, 55, "cstu");
    }

}
