
public class toString_Method {

    String name;
    int age;

    toString_Method(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return "Name : " + name + "\t" + "Age : " + age;
    }

    public static void main(String[] args) {
        toString_Method ob = new toString_Method("SHAWON", 21);
        System.out.println(ob);
    }
}
