import java.util.*;

//This class created for learning INHERITANCE
//This class is called in FirstJava.java
//This class is inherited by the class Motorcycle in the file Motorcycle.java
public class Vehicle{

  //Function for number of wheels
  //To indicate inheritance
  public int wheels(){
    int wheel_num = 4;
    System.out.println(wheel_num);
    return wheel_num;
  }

  //common functon for both classes
  //ie Vehicle and Motorcycle
  public void go(){

    System.out.println("zoom!");
  }
}
