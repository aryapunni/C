import java.util.*;

//This class created for learning INHERITANCE
//This class is called in FirstJava.java
//This class is inherited from the class Vehicle in the file Vehicle.java
public class Motorcycle extends Vehicle{

  //here the functon wheels is different from Vehicle
  //the number of wheels is two here
  //to indicate the difference we write here as @Override
  //Since Motorcycle is an extention of Vehicle we don't have to write the function go here
  @Override
  public int wheels(){

    int wheel_num = 2;
    System.out.println(wheel_num);
    return wheel_num;
  }

}
