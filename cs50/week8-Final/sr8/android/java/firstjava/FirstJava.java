
import java.util.*;



class FirstJava {

  public static void main(String [] args) {

//---------------------BASIC THINGS IN JAVA----------------------//
    //print hello world
    System.out.println("hello world!");

    //Creating string - notice that 'S' in string is capital
    String title = "To the new world";
    // String title = "hello world";

    //creating an int.
    //Since int is a primitive variable 'i' is small letter
    int count = 50;
    count += 1;

    // Print statement in java
    // printing both string and int
    System.out.println(title);
    System.out.println(count);

    //if condition in java
    //unlike C or python equality is checking using .equals "method"
    if(title.equals("hello world")){

      System.out.println("wrong message");
      System.out.println("the correct message is: " + title);

    }
    else {
      System.out.println("entered the correct message");
    }


//---------------------LIST & FOR LOOP----------------------//
    //Declaring a new array in java
    int[] values = new int[]{8, 2, 7};

    //for loop in java
    //values.lenght provides the length of the array
    //for loop similar to C
    for(int i = 0;i < values.length; i++) {

      System.out.println(values[i]);

    }

    //creating a List of strings in java
    List<String> new_list = new ArrayList<>();
    new_list.add("one");
    new_list.add("two");

    //printing out list elements
    for(String value : new_list) {

      System.out.println(value);
    }

    //creating a list of integers in java
    List<Integer> new_int_list = new ArrayList<>();
    new_int_list.add(1);
    new_int_list.add(2);

    for(Integer value : new_int_list) {

      System.out.println(value);
    }

//---------------------MAP IN JAVA----------------------//

    Map<String, String> airports = new HashMap<>();

    airports.put("SFO", "Sanfrancisco");
    airports.put("BOS", "Boston");

    for(Map.Entry<String, String> e : airports.entrySet()) {

      System.out.println(e.getKey() + ": " + e.getValue());
    }

//---------------------DIFFERENT CLASSES----------------------//

    //Creating a new instance of a class named Person
    //and giving the construct a name
    Person person1 = new Person("Tommy");

    //Using the functions of that class
    person1.sayHello();
    person1.wave();

    //Using the static function of that same class
    //without declaring an instance
    Person.wave();


//---------------------INHERITANCE----------------------//

    //Class Motorcycle is inherited from the class Vehicle
    Vehicle fourWheels = new Vehicle();

    //Functon fourWheels gives 4 and go prints zoom
    fourWheels.wheels();
    fourWheels.go();

    //function go prints zoom, but behaviour of wheels is different
    //wheels gives the output as 2
    Motorcycle twoWheels = new Motorcycle();
    twoWheels.wheels();
    twoWheels.go();


  }
}
