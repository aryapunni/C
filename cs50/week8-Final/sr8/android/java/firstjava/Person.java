import java.util.*;

public class Person {

  String name;
  //ocnstruct of this class
  // Person person1 = new Person("Tommy");
  Person(String name) {
    this.name = name;
  }

  //a function can be used by the instances of the classes
  // person1.sayHello()
  public void sayHello(){
    System.out.println("I'm" + name);
  }

  // a static function
  // we can call this function even without a class instance
  //Person.wave();
  public static void wave() {
    System.out.println("Wave");
  }


}
