package This_Keyword;

public class this_Constructor_Cal {

    String name, color;
    int age;

    this_Constructor_Cal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    this_Constructor_Cal(String name, int age, String color) {
        this(name, age);
        this.color = color;
    }

    void show() {
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
        System.out.println("Color : " + color);
        System.out.print("\n");
    }

    public static void main(String[] args) {
        this_Constructor_Cal ob = new this_Constructor_Cal("SHAWON", 20);
        ob.show();

        this_Constructor_Cal ob1 = new this_Constructor_Cal("NAYON", 23, "White");
        ob1.show();
    }
}
